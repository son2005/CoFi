// https://codefights.com/arcade/intro/level-12/sqZ9qDTFHXBNrQeLC
std::vector<std::string> fileNaming(std::vector<std::string> names) {
    map<string,int> m;
    string tmp; int k;
    for(auto &&s:names) {
        if(!m[s]) m[s]++;
        else {
            k = m[s];
            while(m[(tmp = s + "(" + to_string(k++) + ")")]);
            m[tmp]++;
            s = tmp;
        }
    }
    return names;
}
