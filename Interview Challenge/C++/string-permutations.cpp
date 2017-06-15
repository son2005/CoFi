// https://codefights.com/interview/fwMMv4mASRuhxPzcP
void permute(string str, string out, vector<string> & strs) {
    if(str.size() == 0) {
        strs.push_back(out);
        return;
    }

    for(int i = 0; i < str.size(); i++) {
        // Move first char to out
        permute(str.substr(1), out + str[0], strs);

        // Rotate str
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}
std::vector<std::string> stringPermutations(std::string s) {
    std::vector<string> strs;
    permute(s, "", strs);
    sort(strs.begin(), strs.end());
    strs.erase(unique(strs.begin(), strs.end()), strs.end());
    return strs;
}
