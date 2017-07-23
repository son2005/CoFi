// https://codefights.com/arcade/code-arcade/labyrinth-of-nested-loops/tuKA5f3zpzkKKejJx
int rectangleRotation(int a, int b) {
    int counter = 0;
    for(int i = -a - b; i <= a + b; i++) {
        for(int j = -a - b; j <= a + b; j++) {
            if(2 * pow(i - j, 2) <= pow(a, 2) && 2 * pow(i + j, 2) <= pow(b, 2)) counter++;
        }
    }
    return counter;
}
