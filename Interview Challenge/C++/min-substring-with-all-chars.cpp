// https://codefights.com/interview/xGdnzgFTB4nmFrsS5
std::string minSubstringWithAllChars(std::string s, std::string t) {
    int n = s.size();
    int minCheck = t.size();

    // Match
    auto found = s.find(t);
    if(found != string::npos) return s.substr(found, minCheck);

    minCheck++;
    while(minCheck < n) {
        for(int i = 0; i < n - minCheck + 1; i++) {
            string str = s.substr(i, minCheck);
            // Check each t exist in str
            bool exist = true;
            for(auto c:t) {
                if(str.find(c) == string::npos) {
                    exist = false;
                    break;
                }
            }

            if(exist) return str;
        }
        minCheck++;
    }
}
