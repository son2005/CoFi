// https://codefights.com/arcade/code-arcade/labyrinth-of-nested-loops/pdw3izd7SpMTBJqSy
int getLen(int n) {
    return to_string(n).size();
}
int pagesNumberingWithInk(int current, int numberOfDigits) {
    while(numberOfDigits) {
        numberOfDigits -= getLen(current);
        if(getLen(current) > numberOfDigits)
            break;
        current++;
    }
    return current;
}
