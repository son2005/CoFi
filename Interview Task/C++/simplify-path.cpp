/*
Given an absolute file path (Unix-style), shorten it to the format /<dir1>/<dir2>/<dir3>/....

Here is some info on Unix file system paths:

/ is the root directory; the path should always start with it even if it isn't there in the given path;
/ is also used as a directory separator; for example, /code/fights denotes a fights subfolder in the code folder in the root directory;
this also means that // stands for "change the current directory to the current directory"
. is used to mark the current directory;
.. is used to mark the parent directory; if the current directory is root already, .. does nothing.
Example

For path = "/home/a/./x/../b//c/", the output should be
simplifyPath(path) = "/home/a/b/c".

Here is how this path was simplified:
* /./ means "move to the current directory" and can be replaced with a single /;
* /x/../ means "move into directory x and then return back to the parent directory", so it can replaced with a single /;
* // means "move to the current directory" and can be replaced with a single /.

Input/Output

[time limit] 500ms (cpp)
[input] string path

A line containing a path presented in Unix style format. All directories in the path are guaranteed to consist only of English letters.

Guaranteed constraints:
1 ≤ path.length ≤ 5 · 104.

[output] string

The simplified path.
*/
int getPrevSlashPos(string path, int pos) {
    int n = path.length();
    for(int i = pos; i >= 0; i--)
        if(path[i] == '/') return i;
    return -1;
}
string simplifyPathStep1(string path) {
    vector<string> arr = {"//", "/./", "/x/../"};
    int index = 0, n = arr.size();
    while(index < n) {
        auto found = path.find(arr[index]);
        if(found != string::npos)
            path = path.substr(0, found) + "/" + path.substr(found + arr[index].length());
        else
            index++;
    }
    return path;
}
std::string simplifyPath(std::string path) {
    if(path.length() > 1 && path[0] != '/') path = "/" + path;
    path = simplifyPathStep1(path);

    // Build path
    vector<string> arrPath = {"/"};
    string temp;
    int n = path.length();
    for(int i = 1; i < n; i++) {
        bool cond1 = path[i] == '.' && path[i+1] == '.';
        bool cond2 = path[i] == '.' && path[i-1] == '.';
        if(cond1 || cond2) {
            if(path[i-1] == '.')
                if(arrPath.size() > 1) arrPath.pop_back();
            continue;
        }
        if(path[i] != '/') temp += path[i];
        else if(temp != "") {
            arrPath.push_back(temp);
            temp = "";
        }
        if(i == n-1 && temp != "") arrPath.push_back(temp);
    }

    n = arrPath.size();
    path = arrPath[0];
    for(int i = 1; i < n; i++)
        path += arrPath[i] + (i < n - 1 ? "/" : "");
    return path;
}
