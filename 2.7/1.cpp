#include <algorithm>
#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>


std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix){
    
    int m = matrix[0][0];
    size_t n = matrix.size(), k = matrix[0].size();
    std::pair<size_t, size_t> result{0,0};
    for (size_t i = 0; i != n; ++i){
        for (size_t j = 0; j != k; ++j){
            if (matrix[i][j] > m){
                result = {i, j};
                m = matrix[i][j];
            }
        }
    }
    return result;
}


int main() {
    size_t n, k;
    std::cin >> n >> k;
    std::vector<std::vector<int>> t(n, std::vector<int>(k, 0));
    
    for (size_t i = 0; i != n; ++i){
        for (size_t j = 0; j != k; ++j){
            std::cin >> t[i][j];
        }
    }
    std::pair<int, int> p = MatrixArgMax(t);
    std::cout << p.first << " " << p.second << std::endl;
}
