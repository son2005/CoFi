// https://codefights.com/arcade/intro/level-12/NJJhENpgheFRQbPRA
int digitsProduct(int product) {
    if(product == 0) return 10;
    if(product < 10) return product;
    int index = product - 1;
    string tmp;
    while(index > 1) {
        if(product % index == 0 && index < 10) {
            tmp = std::to_string(index) + tmp;
            product /= index;
            if(product < 10) {
                tmp = std::to_string(product) + tmp;
                return stoi(tmp);
            }
            index = product - 1;
            continue;
        }
        index--;
    }
    return -1;
}
