#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int cnt = 0;
    int arr[n][m] = {0};
    // Please write your code here.
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                arr[j][i] = cnt;
            } else {
                arr[n-1-j][i] = cnt;
            }

            cnt++;
        }    
    }

        for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;    
    }


    return 0;
}
