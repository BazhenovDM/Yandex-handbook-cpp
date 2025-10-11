#include <iostream>
#include <string>

int main() {
    std::string line, pal;
    std::getline(std::cin, line);
    for (char i : line){
        if (i != ' '){
            pal += i;
        }
    }
    for (size_t i = 0; i < pal.length() / 2; ++i){
        if (pal[i] != pal[pal.length() - 1 - i]){
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
}


