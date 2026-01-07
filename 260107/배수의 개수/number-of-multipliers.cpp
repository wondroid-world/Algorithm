#include <iostream>
using namespace std;

int main() {
    int num;
    int cnt = 0;
    int cnt2 = 0;

    for (int i = 1; i < 11; i++) {
        cin >> num;
        if (num % 3 == 0) {
            cnt++;
        }
        if (num % 5 == 0) {
            cnt2++;
        }
    }

    cout << cnt << ' ' << cnt2;
    return 0;
}