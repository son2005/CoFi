// https://codefights.com/arcade/intro/level-4/Xfeo7r9SBSpo3Wico
bool palindromeRearranging(std::string a) {
    // Solution:
    // 1) Sort string first
    // 2) Loop when string not empty
    // - Find if first element char exists then remove both of them
    // - If the element is unique, push it to tmp string, remove first char from string (if tmp size >= 2 then it is not palindrome)
    // 4) Check tmp
    // - If tmp is empty or has only 1 char => palidrome
    // - Else => false
    sort(a.begin(), a.end());
    string tmp = "";
    while(a.size() > 0) {
        auto found = a.find(a[0], 1);
        if(found != string::npos) a = a.substr(found + 1);
        else {
            tmp += a[0];
            a = a.substr(1);
            if(tmp.size() > 1) return false;
        }
    }
    return true;
}
