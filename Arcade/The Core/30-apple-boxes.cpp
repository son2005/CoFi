// https://codefights.com/arcade/code-arcade/loop-tunnel/scG8AFsPuqQGx8Qjf
int appleBoxes(int k) {
    int yellowApples = 0,
        redApples = 0;
    for(int i = 1, square = 1; i <= k; i++, square = i * i) {
        if(i&1) yellowApples += square;
        else redApples += square;
    }
    return redApples - yellowApples;
}
