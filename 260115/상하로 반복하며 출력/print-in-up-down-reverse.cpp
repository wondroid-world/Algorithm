#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row = 1;
    int col = n;
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {
            if (j % 2 == 0) {
                cout << col;
            } else {
                cout << row;
            }
        }
        cout << endl;
        col--;
        row++;    
    }
    return 0;
}