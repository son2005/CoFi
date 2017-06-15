// https://codefights.com/interview/h8pq7aHrkYAbBLeRB
int groupsOfAnagrams(std::vector<std::string> words) {
    int n = words.size();
    if(n==1) return 1;
    for(auto &c : words) {
        sort(c.begin(), c.end());
    }
    set<string> res;
    for(auto c : words) {
        res.insert(c);
    }
    return res.size();
}
