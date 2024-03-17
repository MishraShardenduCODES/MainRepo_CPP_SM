#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;

void transpose(int mat[][MAXN], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(mat[i][j], mat[j][i]);
        }
    }
}
void reverseRows(int mat[][MAXN], int n) {
    for (int i = 0; i < n; ++i) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(mat[i][start], mat[i][end]);
            start++;
            end--;
        }
    }
}
void rotateMatrix(int mat[][MAXN], int n) {
    transpose(mat, n);
    reverseRows(mat, n);
}
void printMatrix(int mat[][MAXN], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    int mat[MAXN][MAXN];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }
    rotateMatrix(mat, n);
    cout << "Rotated matrix:\n";
    printMatrix(mat, n);

    return 0;
}
