#include <string>
#include <iostream>
#include <vector>

std::vector<std::string> Split(const std::string& str, char delimiter){
    int v = 0;
    for (auto c : str){
        if (c == delimiter){
            ++v;
        }
    }
    
    std::vector<std::string> t(v + 1, "");
    int count = 0;
    for (size_t i = 0; i != str.length(); ++i){
        if (str[i] != delimiter){
            t[count] += str.substr(i, 1);
        } else {
            ++count;
        }
    }
    return t;
}
