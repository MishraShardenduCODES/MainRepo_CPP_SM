#include <iostream>
using namespace std;

const int MAX_ROWS = 100;  // Maximum number of rows
const int MAX_COLS = 100;  // Maximum number of columns

void printMatrix(const int mat[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows > MAX_ROWS || cols > MAX_COLS) {
        cout << "Error: Matrix size exceeds maximum dimensions." << endl;
        return 1;
    }

    int matrix[MAX_ROWS][MAX_COLS] = {{0}};  // Initialize matrix with zeros

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is:" << endl;
    printMatrix(matrix, rows, cols);

    return 0;
}
