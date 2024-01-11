#include <iostream>

#define MAX 10 // Define maximum size for matrices

void multiplyMatrix(int mat1[][MAX], int mat2[][MAX], int result[][MAX], int rows1, int cols1, int rows2, int cols2) {
    // Check if matrix multiplication is possible
    if (cols1 != rows2) {
        std::cout << "Matrix multiplication not possible! Columns of the first matrix must be equal to rows of the second matrix." << std::endl;
        return;
    }

    // Perform multiplication
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    std::cout << "Enter rows and columns for the first matrix: ";
    std::cin >> rows1 >> cols1;

    std::cout << "Enter elements for the first matrix:" << std::endl;
    int matrix1[MAX][MAX];
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter rows and columns for the second matrix: ";
    std::cin >> rows2 >> cols2;

    std::cout << "Enter elements for the second matrix:" << std::endl;
    int matrix2[MAX][MAX];
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    // Resultant matrix
    int result[MAX][MAX];

    // Multiply matrices
    multiplyMatrix(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

    // Display result
    std::cout << "Resultant Matrix:" << std::endl;
    displayMatrix(result, rows1, cols2);

    return 0;
}
