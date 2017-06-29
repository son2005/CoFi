/*
Sort the letters in the string s by the order they occur in the string t.

Example

For s = "weather" and t = "therapyw", the output should be
sortByString(s, t) = "theeraw";

For s = "good" and t = "odg", the output should be
sortByString(s, t) = "oodg".

Input/Output

[time limit] 500ms (cpp)
[input] string s

A string consisting only of lowercase English letters.

Guaranteed constraints:
0 ≤ s.length ≤ 104.

[input] string t

A string consisting only of unique lowercase English letters. It is guaranteed that t contains all of the letters that occur in s.

Guaranteed constraints:
0 ≤ t.length ≤ 26.

[output] string
*/
std::string sortByString(std::string s, std::string t) {
    vector<string> res(s.size() + t.size(), "");
    map<char,int> m;
    int counter = 0;
    for(auto &&c: t) m[c] = counter++;
    for(auto &&c: s) res[m[c]] += c;
    return std::accumulate(res.begin(), res.end(), string{""});
}
