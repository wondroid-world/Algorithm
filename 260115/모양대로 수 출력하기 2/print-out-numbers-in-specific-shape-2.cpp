#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 2;
    int result = 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << result << ' ';
            if (cnt < 5) {
                result = 2 * cnt;
                cnt++;
            } else {
                result = 2;
                cnt = 2;
            }
            
        }
        cout << endl;
    }
    return 0;
}