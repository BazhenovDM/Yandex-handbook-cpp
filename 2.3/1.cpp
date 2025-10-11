#include <iostream>

int main(){
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if ((abs(x1 - x2) == 0 || abs(y1 - y2) == 0) || (abs(x1 - x2) == abs(y1 - y2))){
        std::cout << "YES" << std::endl;

    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}