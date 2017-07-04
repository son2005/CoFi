// https://codefights.com/arcade/intro/level-9/hoLtYWbjdrD2PF6yo
int digitDegree(int n) {
    string str = to_string(n);
    int counter = 0,
        sum = 0;
    while(str.length() > 1) {
        ++counter; sum = 0;
        for(auto &&c:str) sum += c - '0';
        str = to_string(sum);
    }
    return counter;
}
