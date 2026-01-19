#include <iostream>
using namespace std;

int main() {
    int sum, sumRow, sumCol = 0;
    int arr[2][4];
    int arrRow[2] = {0,};
    int arrCol[4] = {0,};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
            arrRow[i] += arr[i][j];
            arrCol[j] += arr[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        cout << (double) arrRow[i] / 4 << ' ';
    }

    cout << endl;

    for (int i = 0; i < 4; i++) {
        cout << (double) arrCol[i] / 2 << ' ';
    }
    cout << endl;
    cout << (double) sum / 8;


    return 0;
}