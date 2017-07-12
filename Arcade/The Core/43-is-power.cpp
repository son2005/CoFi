// https://codefights.com/arcade/code-arcade/labyrinth-of-nested-loops/yBFfNv5fTqhcacZ7w
bool isPower(int n) {
    if(n < 2) return 1;
    int index = 2;
    while(index < n) {
        if(n%index == 0) {
            int m = n / index;
            int tmp = index;
            while(tmp < m) tmp*=tmp;
            if(m==tmp) return 1;
        }
        index++;
    }
    return 0;
}
