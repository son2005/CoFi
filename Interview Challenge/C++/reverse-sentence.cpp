// https://codefights.com/interview/DGnaZ3J5hnWS6xYJy
std::string reverseSentence(std::string sentence) {
    std::vector<string> strReverse;
    while(sentence.size() > 0) {
        bool isLastWord = true;
        for(int i = 0; i < sentence.size(); i++) {
            if(sentence[i] == ' ') {
                isLastWord = false;
                // Cut and skip space
                string tmp = sentence.substr(0, i);
                strReverse.push_back(tmp);
                // Erase word + space
                sentence.erase(sentence.begin(), sentence.begin() + i + 1);
                break;
            }
        }
        if(isLastWord) {
            string tmp = sentence.substr(0, sentence.size());
            strReverse.push_back(tmp);
            sentence = "";
        }
    }

    std::string result = "";
    for(int i = strReverse.size() - 1; i >= 0; i--) {
        result += strReverse[i];
        if(i != 0) {
            result += " ";
        }
    }

    return result;
}
