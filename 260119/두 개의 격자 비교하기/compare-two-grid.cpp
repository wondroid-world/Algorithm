#include <iostream>
using namespace std;

int main() {
    int n, m, result;
    cin >> n >> m;
    
    int arr[n][m] = {};
    int arr1[n][m] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }     
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr1[i][j];
        }     
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            if (arr[i][j] == arr1[i][j]) {
                result = 0; 
            } else {
                result = 1;
            }
            cout << result << ' ';
        }
        cout << endl;     
    }

    return 0;
}