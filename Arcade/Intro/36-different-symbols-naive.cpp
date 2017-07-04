// https://codefights.com/arcade/intro/level-8/8N7p3MqzGQg5vFJfZ
int differentSymbolsNaive(std::string s) {
    unordered_set<char> m;
    for(auto &&c:s)
        m.insert(c);
    return m.size();
}
