// https://codefights.com/arcade/intro/level-10/HJ2thsvjL25iCvvdm
bool isMAC48Address(std::string s) {
    int counter = 0;
    int index = 0;
    for(auto&&c:s) {
        if(++index % 3 == 0) {
            if(c=='-')
                counter++;
            else break;
            continue;
        }
        if( !(isdigit(c) || isalpha(c) && c >= 'A' && c <= 'F') ) return false;
    }
    return counter == 5 && index == 17;
}
