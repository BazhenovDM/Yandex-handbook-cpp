#include <cmath>
#include <iostream>

int main() {
    size_t n;
    double s = 0;
    std::cin >> n;
    for (size_t i = 1; i < n + 1; ++i){
        s += (pow(-1, i + 1) * 1.0) / i;
    }
    std::cout << s << std::endl;
    return 0;
}