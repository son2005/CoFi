// https://codefights.com/interview/xQYfEWxBsnFP4Jmjh
bool containsDuplicates(std::vector<int> a) {
    sort(a.begin(), a.end());

    int i = 1;
    while(i < a.size()) {
        if(!(a[i]^a[i-1])) return true;
        i++;
    }
    return false;
}
