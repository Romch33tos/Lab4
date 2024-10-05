#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int matrix[3][3];
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int min_i, min_j, max_i, max_j;
    
    cout << "Введите элементы матрицы 3х3:" << endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
            
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
                min_i = i;
                min_j = j;
            }
            
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    
    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    int temp = matrix[min_i][min_j];
    matrix[min_i][min_j] = matrix[max_i][max_j];
    matrix[max_i][max_j] = temp;
    
    cout << "Полученная матрица:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
