#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int div = n;
    int cnt = 0;
    
    for (int i = 1; i <= n; i++) {
        div /= i;
        cnt++;
        if (div <= 1) {
            cout << cnt;
            break;
        }
    }
    return 0;
}