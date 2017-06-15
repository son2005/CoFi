// https://codefights.com/interview/gxG6mKetbu3p7Ekim
int countVowelConsonant(std::string s) {
    string vowels = "aiueo";
    int sum = 0;
    for(auto &&c : s) {
        if(vowels.find(c) != string::npos) sum+=1;
        else sum+=2;
    }
    return sum;
}
