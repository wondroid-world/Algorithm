#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << num - j << " "; 
            } else {
                cout << "  "; 
            }
        }

        cout << endl;

    }
    return 0;
}