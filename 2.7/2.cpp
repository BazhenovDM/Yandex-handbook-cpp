#include <string>
#include <vector>

std::string CommonPrefix(const std::vector<std::string>& words){
    if (words.size() == 0){
        return "";
    } else if (words.size() == 1){
        return words[0];
    }
    std::string first = words[0];
    for (std::string word : words){
        std::string tmp_word;
        for (size_t i = 0; i != first.length(); ++i){
            if (word.length() != i && first[i] == word[i]){
                tmp_word += word[i];
            } else {
                first = tmp_word;
                break;
            }
        };
        if (tmp_word == ""){
            break;
        }
    }
    return first;
};
