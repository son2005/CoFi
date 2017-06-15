// https://codefights.com/interview/At83id5ZCwo2mNzdm
std::string multiplyTwoStrings(std::string s1, std::string s2) {
    int t1 = s1.size();
    int t2 = s2.size();
    vector<int> result(t1+t2,0);

    int i_s1 = 0, i_s2 = 0;
    for(int i = t1 - 1; i >=0; i--) {
        int n1 = s1[i] - '0';
        i_s2 = 0;
        for(int j = t2 - 1; j >= 0; j--) {
            int n2 = s2[j] - '0';
            result[i_s1 + i_s2++] += n1 * n2;
        }
        i_s1++;
    }

    int carry = 0;
    for(int i = 0; i < result.size(); i++) {
        int num = result[i] + carry;
        result[i] = num % 10;
        carry = num / 10;
    }

    int i = result.size() - 1;
    while(i >= 0 && result[i] == 0) i--;

    string r = "";
    for(int j = i; j >=0; j--) r+=to_string(result[j]);

    return r;
}
