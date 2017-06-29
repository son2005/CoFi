// https://codefights.com/arcade/intro/level-6/6cmcmszJQr6GQzRwW
bool evenDigitsOnly(int n) {
    string s = to_string(n);
    for(auto &&c:s)
        if((c - '0') & 1) return false;
    return true;
}
