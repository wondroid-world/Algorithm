#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;
    int cnt2 = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            cnt = i * j;
            cout << cnt << ' ';
        }
        cout << endl;        
    }
    return 0;
}