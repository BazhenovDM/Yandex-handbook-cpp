#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

int main(){
    size_t n;
    std::cin >> n;
    std::vector<std::pair<int, int>> t(n);
    for (size_t i = 0; i != n; ++i){
        int a, b;
        std::cin >> a >> b;
        t[i] = {a, b};
    }
    std::sort(t.begin(), t.end(), [](std::pair<int, int> a, std::pair<int, int> b){
        return a.first * a.first + a.second * a.second < b.first * b.first + b.second * b.second;
    });
    std::cout << std:: endl;

    for (auto m : t){
        std::cout << m.first << " " << m.second << std:: endl;
    }

}