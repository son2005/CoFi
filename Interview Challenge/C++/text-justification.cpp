// https://codefights.com/interview/ibANT8ZGc3shACBRF
std::vector<std::string> textJustification(std::vector<std::string> words, int l) {
    std::vector<std::string> result;
    int n = words.size();
    int index = 0;
    while (index < n) {
        int ws_len = 0;
        std::vector<std::string> ws;

        // Get words
        while(index < n) {
            int len = ws_len + ws.size() - 1 + words[index].length() + 1;
            if (len <= l) {
                ws.push_back(words[index]);
                ws_len += words[index].length();
                index++;
            }
            else {
                break;
            }
        }

        // Space
        int space = l - ws_len;
        // Last line or 1 word
        if(index == n || ws.size() == 1) {
            for(int i = 0; i < ws.size() - 1 && space > 0; i++, space--) {
                ws[i] += " ";
            }
            for(; space > 0; space--) ws.back() += " ";
        }
        else {
            while(space > 0) {
                for(int i = 0; i < ws.size() - 1 && space > 0; i++, space--) {
                    ws[i] += " ";
                }
            }
        }

        std::string str;
        for(int i = 0; i < ws.size(); i++) {
            str += ws[i];
        }
        result.push_back(str);
    }
    return result;
}
