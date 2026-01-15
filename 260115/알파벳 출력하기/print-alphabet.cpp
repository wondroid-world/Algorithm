#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= i) {
            cout << char(65 + cnt);
            if (char(65 + cnt) != 'Z') {
                cnt++;
            } else {
                cnt = 0;
            }
           
            }

        }
        cout << endl;    
    }
    return 0;
}