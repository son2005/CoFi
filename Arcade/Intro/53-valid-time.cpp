// https://codefights.com/arcade/intro/level-12/ywMyCTspqGXPWRZx5
bool validTime(std::string time) {
    stringstream ss{time};
    int hh = 0, mm = 0;
    char p = ' ';
    ss >> hh;
    ss >> p;
    ss >> mm;
    return hh < 24 && mm < 60;
}
