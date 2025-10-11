#include <vector>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix){
    if (matrix.size() == 0){
        return matrix;
    }
    size_t n = matrix.size(), m = matrix[0].size();

    std::vector<std::vector<int>> t(m, std::vector<int>(n, 0));
    for (size_t i = 0; i != m; ++i){
        for (size_t j = 0; j != n; ++j){
            t[i][j] = matrix[j][i];
        }
    }
    return t;
}