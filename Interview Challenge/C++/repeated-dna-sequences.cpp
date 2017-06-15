// https://codefights.com/interview/f9A6Mo8wek6qwfa94
bool isValidDNA(string s) {
    string dnaSample = "ACGT";
    for(int i = 0; i < s.size(); i++) {
        if(dnaSample.find(s[i]) == string::npos) {
            return false;
        }
    }
    return true;
}
std::vector<std::string> repeatedDNASequences(std::string s) {
    vector<string> results;

    int dnaLen = 10;
    if(s.size() < dnaLen) return results;

    for(int i = 0; i < s.size() - dnaLen + 1; i++) {
        std::string validDNA = s.substr(i, dnaLen);
        if(isValidDNA(validDNA)) {
            auto found = s.find(validDNA, i + 1);
            // Check if appear more than once
            if(found != string::npos) {
               // Check if not exist in results
                if(find(results.begin(), results.end(), validDNA) == results.end()) {
                    results.push_back(validDNA);
                }
            }
        }
    }


    sort(results.begin(), results.end());
    return results;
}
