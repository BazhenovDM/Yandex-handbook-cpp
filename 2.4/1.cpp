#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cin >> line;
    if  (!(line.size() >= 8 && line.size() <= 14)){
        std::cout << "NO" << std::endl;
        return 0;
    }
    int big = 0, small = 0, digit = 0, other = 0; 
    for (char word : line){
        int c = static_cast<int>(word);
        if (c < 33 || c > 126) {
            std::cout << "NO" << std::endl;
            return 0;
        } else if (c >= 48 && c <= 57) {
            digit = 1;
        } else if (c >= 65 && c <=90){
            big = 1;
        }else if (c >= 97 && c <=122){
            small = 1;
        } else {
            other = 1;
        }
    }
    if (digit + small + other + big >= 3) {
        std::cout << "YES" << std::endl;
    } else{
        std::cout << "NO" << std::endl;
    }
}
