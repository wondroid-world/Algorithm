#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int odd = 0;


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 != 0) {
                odd++;
                cout << odd << ' ';
                
            } else {
                odd += 2;
                cout << odd << ' ';
            }
        }
        cout << endl;        
    }
    return 0;
}