#include <iostream>
using namespace std;

int main() {
    int n, m;
    int cnt = 0;
    cin >> n >> m;
    int arr[n][m] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cnt++;
            arr[i][j] = cnt;
            cout << arr[i][j] << ' ';
        }  
        cout << endl;      
    }
    return 0;
}