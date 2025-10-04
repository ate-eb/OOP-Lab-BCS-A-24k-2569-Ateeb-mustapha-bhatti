#include <iostream>
using namespace std;

void inputMatrix(int rows, int cols, int mat[10][10], const string &name) {
    cout << "Enter elements of " << name << " (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int mat[10][10], const string &name) {
    cout << name << " (" << rows << "x" << cols << "):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyMatrices(int row1, int col1, int row2, int col2, int mat1[10][10], int mat2[10][10], int mat3[10][10]) {
    if (col1 != row2) {
        cout << "Error: The number of columns in the first matrix must equal the number of rows in the second matrix.";
        return;
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            mat3[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printMatrix(row1, col2, mat3, "Resultant Matrix");
}

int main() {
    int row1, col1, row2, col2;
    int mat1[10][10], mat2[10][10], mat3[10][10];

    cout << "Enter rows and columns of the first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter rows and columns of the second matrix: ";
    cin >> row2 >> col2;

    inputMatrix(row1, col1, mat1, "First Matrix");
    inputMatrix(row2, col2, mat2, "Second Matrix");

    multiplyMatrices(row1, col1, row2, col2, mat1, mat2, mat3);

    return 0;
}
