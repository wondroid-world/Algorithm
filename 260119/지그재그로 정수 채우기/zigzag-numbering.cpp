#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int cnt = 0;
    int arr[4][2] = {0};
    // Please write your code here.
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (i % 2 == 0) {
                arr[j][i] = cnt;
            } else {
                arr[3-j][i] = cnt;
            }

            cnt++;
        }    
    }

        for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;    
    }


    return 0;
}
