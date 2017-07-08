// https://codefights.com/arcade/code-arcade/intro-gates/QrCSNQWhnQoaK9KgK
bool arithmeticExpression(int a, int b, int c) {
    int resAdd = a + b;
    int resSub = a - b;
    int resMul = a * b;
    float resDiv = a*1.f / b;
    return resAdd == c || resSub == c || resMul == c || resDiv == c;
}
