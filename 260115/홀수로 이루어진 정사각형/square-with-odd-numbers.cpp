#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 11;
    int cnt2 = 11;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == 1) {
                cnt = cnt2;
            }
            cout << cnt << ' ';
            cnt += 2;
        }
        cnt2 += 2;        
        cout << endl;
    }
    return 0;
}