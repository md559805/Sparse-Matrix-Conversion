#include <iostream>
using namespace std;

int main() {
    int rows, cols;


    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[100][100];
    int sparse[100][3];


    cout << "\nEnter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }


    int k = 1; 
    int nonZeroCount = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
                nonZeroCount++;
            }
        }
    }


    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = nonZeroCount;


    cout << "\nSparse Matrix (3-column form):\n";
    cout << "Row  Col  Value\n";
    for (int i = 0; i <= nonZeroCount; i++) {
        cout << sparse[i][0] << "    "
             << sparse[i][1] << "    "
             << sparse[i][2] << endl;
    }


    cout << "\nNumber of non-zero elements: " << nonZeroCount << endl;

    return 0;
}