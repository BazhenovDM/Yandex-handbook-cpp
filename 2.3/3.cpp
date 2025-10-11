#include <iostream>

int main(){
    int year;
    std::cin >> year;
    if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        std::cout << "YES" << std::endl;
    }else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}