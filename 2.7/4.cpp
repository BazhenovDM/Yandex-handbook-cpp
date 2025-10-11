#include <string>
#include <iostream>
#include <vector>

std::string Join(const std::vector<std::string>& tokens, char delimiter){
    std::string res;
    for (auto c : tokens){
        res += c + delimiter;
    }
    return res.substr(0, res.length() - 1);
}


int main(){
    std::vector<std::string> t = {"What", "is", "your", "name?"};
    std::cout << Join(t, '_');
}