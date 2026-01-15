#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 1;
    int l = n;

    for  (int j = 1; j <= n; j++) {
        if (j % 2 == 0) {
            for (int i = 1; i <= k; i++) {
                cout << "* ";
            }
            cout << endl;
            k++;
        } else {
            for (int i = l; i >= 1; i--) {
                cout << "* ";
            }
            cout << endl;
            l--;            
        }
    }

    if (n % 2 == 0) {
for  (int j = 1; j <= n; j++) {
        if (j % 2 != 0) {
            for (int i = l; i >= 1; i--) {
                cout << "* ";
            }
            cout << endl;
            l--;
        } else {
            for (int i = 1; i <= k; i++) {
                cout << "* ";
            }
            cout << endl;
            k++;            
        }
    }

    } else {for  (int j = 1; j <= n; j++) {
        if (j % 2 == 0) {
            for (int i = 1; i <= l; i++) {
                cout << "* ";
            }
            cout << endl;
            l++;
        } else {
            for (int i = 1; i <= k; i++) {
                cout << "* ";
            }
            cout << endl;
            k++;            
        }
    }}

    return 0;
}