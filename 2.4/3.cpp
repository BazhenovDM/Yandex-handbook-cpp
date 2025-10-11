#include <iostream>
#include <vector>

int main() {
    int n, tmp;
    std::cin >> n;
    std::vector map(n, 0);
    for (int i = 0; i != n; ++i){
        std::cin >> tmp;
        map[tmp - 1] = i + 1;
    }
    for (int i = 0; i != n; ++i){
        std::cout << map[i] << " ";
    }
    return 0;
}


