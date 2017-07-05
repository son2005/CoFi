// https://codefights.com/arcade/intro/level-12/YqZwMJguZBY7Hz84T
int sumUpNumbers(std::string inputString) {
    int sum = 0;
    string tmp;
    for(auto&c:inputString) {
        if(isdigit(c)) {
            tmp += c;
            continue;
        }
        else
            if(tmp.length() > 0)
                sum+=stoi(tmp);
        tmp = "";
    }
    if(tmp.length() > 0)
        sum+=stoi(tmp);
    return sum;
}
