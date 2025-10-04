#include <iostream>
using namespace std;

void inputMatrix(int **mat, int N) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }
}

void printMatrix(int **mat, int N) {
    cout << "\nMatrix (" << N << "x" << N << "):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter size N for the square matrix: ";
    cin >> N;

    int **mat = new int*[N];
    for (int i = 0; i < N; i++) {
        mat[i] = new int[N];
    }

    inputMatrix(mat, N);
    printMatrix(mat, N);

    int mainDiag = 0, sideDiag = 0;
    for (int i = 0; i < N; i++) {
        mainDiag += mat[i][i];
        sideDiag += mat[i][N - i - 1];
    }

    cout << "\nSum of main diagonal: " << mainDiag << endl;
    cout << "Sum of side diagonal: " << sideDiag << endl;

    for (int i = 0; i < N; i++) {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}
