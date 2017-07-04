// https://codefights.com/arcade/intro/level-9/xHvruDnQCx7mYom3T
int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int curHeight = 0;
    int days = 0;
    while(curHeight < desiredHeight) {
        days++;
        curHeight += upSpeed;
        if(curHeight >= desiredHeight) {
            break;
        }
        curHeight -= downSpeed;
    }
    return days;
}
