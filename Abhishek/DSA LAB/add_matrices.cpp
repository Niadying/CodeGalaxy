#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> addMatrices(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
    int rows = mat1.size();
    int cols = mat1[0].size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return result;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> mat2 = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    vector<vector<int>> result = addMatrices(mat1, mat2);
    printMatrix(result);
    return 0;
}
