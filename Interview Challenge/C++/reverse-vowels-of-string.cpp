// https://codefights.com/interview/9JbYrEhK9tz6ANKLC
std::string reverseVowelsOfString(std::string s) {
    std::vector<int> pos;    
    std::string vowels = "aeiouAEIOU";
    std::string tmp = "";
    for(int i = 0; i < s.size(); i++){
        if(vowels.find(s[i]) != std::string::npos) {
            pos.push_back(i);
            tmp += s[i];
        }
        else {
            pos.push_back(-1);
        }
    }

    std::reverse(tmp.begin(), tmp.end());
    std::string result = "";
    int index = 0;
    for(int i = 0; i < s.size(); i++) {
        if(pos[i] != -1) {
            result += tmp[index++];
        }
        else {
            result += s[i];
        }
    }
    return result;
}
