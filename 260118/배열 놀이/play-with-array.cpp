#include <iostream>
using namespace std;

int main() {
    int n, q, k, l, e;
    int idx = 0;
    cin >> n >> q;

    int arr[n] = {0,};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        cin >> k >> l;
        if (k == 1) {
            cout << arr[l - 1]<< endl;
        } else if (k == 2) {
            for (int j = 0; j < n; j++) {
                if (arr[j] == l) {
                    idx = j + 1;
                    cout << idx;
                    break; 
                }
            }
            cout << endl;
        } else if (k == 3) {
            cin >> e;
            for (int i = l - 1; i < e; i++) {
                cout << arr[i] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}