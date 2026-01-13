#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int p = 1; p <= i; p++) {
                    for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << " ";
        }
        cout << endl;
    }
    return 0;
}