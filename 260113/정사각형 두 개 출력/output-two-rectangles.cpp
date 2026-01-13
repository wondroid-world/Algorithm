#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int p = 0; p < 2; p++) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout <<endl;
    }

    return 0;
}