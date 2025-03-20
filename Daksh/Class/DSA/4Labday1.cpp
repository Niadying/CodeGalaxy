#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    // Get matrix dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    // Create the matrix
    int matrix[20][20]; // Using fixed size array for simplicity
    
    // Input matrix elements
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Count zero elements
    int zeroCount = 0;
    int totalElements = rows * cols;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    
    // Check if sparse
    if (zeroCount > totalElements / 2) {
        cout << "The matrix is sparse." << endl;
    } else {
        cout << "The matrix is not sparse." << endl;
    }
    
    return 0;
}