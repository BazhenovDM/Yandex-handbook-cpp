#include <iostream>

int main() {
    long long int n;
    int s = 0;
    std::cin >> n;
    n = std::abs(n);
    while (n > 0){
        s += n % 10;
        n /= 10;
    }
    std::cout << s << std::endl;
    return 0;
}