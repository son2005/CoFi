// https://codefights.com/arcade/intro/level-6/PWLT8GBrv9xXy4Dui
std::string alphabeticShift(std::string inputString) {
    for(auto &&c:inputString)
        c = (c=='z') ? 'a' : c+1;
    return inputString;
}
