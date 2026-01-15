#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 1;
    int l = n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= l; j++) {
                cout << "* ";
            }
            cout << endl;
            l--;
        } else {
            for (int j = 1; j <= k; j++) {
                cout << "* ";
            }
            k++;
            cout << endl;
        }
    }   
    if (n % 2 == 0) {
         for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
        for (int j = 1; j <= k; j++) {
            cout << "* ";
        }
        cout << endl;
        k++;
    } else {
        for (int j = 1; j <= l; j++) {
            cout << "* ";
        }
        l--;
        cout << endl;
    }
}   
    } else {
 for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
        for (int j = 1; j <= l; j++) {
            cout << "* ";
        }
        cout << endl;
        l--;
    } else {
        for (int j = 1; j <= k; j++) {
            cout << "* ";
        }
        k++;
        cout << endl;
    }
}   
    }
   
    return 0;
}