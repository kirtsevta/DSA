// 2D array in C++
#include <iostream>
using namespace std;

int main() {
    int rows = 3, columns = 3;
    int arr[3][3];

    cout << "Enter elements for print a matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\n2D Array elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
