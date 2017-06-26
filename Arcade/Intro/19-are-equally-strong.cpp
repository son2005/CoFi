// https://codefights.com/arcade/intro/level-5/g6dc9KJyxmFjB98dL
bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int sumY = yourLeft + yourRight;
    int sumF = friendsLeft + friendsRight;
    if (sumF == sumY) {
        if(yourLeft != friendsLeft) {
            if(yourLeft != friendsRight) {
                return false;
            }
        }
        return true;
    }
    return false;
}
