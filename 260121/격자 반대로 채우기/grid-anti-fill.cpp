#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n] = {0};
    int cnt = 1;

    for (int i = n - 1; i >= 0; i--) {
        if (n % 2 == 1) {
            if (i % 2 == 0) {
            for (int j = n - 1; j >= 0; j--) {
                arr[j][i] = cnt;   
                cnt++;
                }
            } else {
                 for (int j = 0; j <= n - 1; j++) {
                arr[j][i] = cnt;   
                cnt++;
                }
            }
        } else {
              if (i % 2 != 0) {
            for (int j = n - 1; j >= 0; j--) {
                arr[j][i] = cnt;   
                cnt++;
                }
            } else {
                 for (int j = 0; j <= n - 1; j++) {
                arr[j][i] = cnt;   
                cnt++;
                }
            }
        }
       
        
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}