// https://codefights.com/arcade/code-arcade/loop-tunnel/KLbRMcWhaZi3dvYH5
// bool increaseNumberRoundness(int n) {
//     string res = to_string(n);
//     auto found = res.find("0");
//     if(found!=string::npos) res = res.substr(found+1);
//     else return false;
//     int i = 0;
//     while(i < res.size()) if(res[i++] != '0') return true;
//     return false;
// }

bool increaseNumberRoundness(int n) {
    // Find next != 0
    while(!(n%10)) n/=10;
    // Find next 0
    while((n%10)) n/=10;
    return n;
}
