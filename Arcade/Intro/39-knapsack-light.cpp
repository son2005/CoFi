// https://codefights.com/arcade/intro/level-9/r9azLYp2BDZPyzaG2
int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    if(weight1 + weight2 <= maxW) return value1 + value2;
    else {
        if(value1 > value2) {
            if(weight1 <= maxW)
                return value1;
        }
        else {
            if(weight2 <= maxW)
                return value2;
        }

        if(weight1 <= maxW)
            return value1;
        else if(weight2 <= maxW)
            return value2;
    }
    return 0;
}
