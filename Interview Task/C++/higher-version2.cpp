/*
You have two version strings composed of several non-negative decimal fields that are separated by periods ("."). Both strings contain an equal number of numeric fields. Return 1 if the first version is higher than the second version, -1 if it is smaller, and 0 if the two versions are the same.

The syntax follows the regular semver (semantic versioning) ordering rules:

1.0.5 < 1.1.0 < 1.1.5 < 1.1.10 < 1.2.0 < 1.2.2
< 1.2.10 < 1.10.2 < 2.0.0 < 10.0.0
Example

For ver1 = "1.2.2" and ver2 = "1.2.0", the output should be
higherVersion2(ver1, ver2) = 1;
For ver1 = "1.0.5" and ver2 = "1.1.0", the output should be
higherVersion2(ver1, ver2) = -1;
For ver1 = "1.0.5" and ver2 = "1.00.05", the output should be
higherVersion2(ver1, ver2) = 0.
Input/Output

[time limit] 500ms (cpp)
[input] string ver1

Correct version as a string.

Guaranteed constraints:

1 ≤ ver1.length ≤ 350.

[input] string ver2

Correct version as a string.

Guaranteed constraints:

1 ≤ ver2.length ≤ 350.

[output] integer

Return 1 if ver1 is higher than ver2, -1 if it's smaller, and 0 if the two versions are the same.
*/
vector<int> getVersion(string s) {
    stringstream ss{s};
    vector<int> res;
    int version;
    char splt = ' ';
    while(!ss.eof()) {
        ss >> version;
        ss >> splt;
        res.push_back(version);
    }
    return res;
}
int higherVersion2(std::string ver1, std::string ver2) {
    vector<int> v1 = getVersion(ver1);
    vector<int> v2 = getVersion(ver2);
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] > v2[i]) return 1;
        else if(v1[i] < v2[i]) return -1;
    }
    return 0;
}
