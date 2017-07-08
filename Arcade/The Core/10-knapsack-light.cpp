// https://codefights.com/arcade/code-arcade/intro-gates/r9azLYp2BDZPyzaG2
int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    if(weight1 + weight2 <= maxW) return value1 + value2;
    if(value1 >= value2) {
        if(weight1 <= maxW) return value1;
        else if(weight2 <= maxW) return value2;
    }
    else {
        if(weight2 <= maxW) return value2;
        else if(weight1 <= maxW) return value1;
    }
    return 0;
}
