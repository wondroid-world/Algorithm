#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    int cnt = 0;
    for (int i = st; i <= ed; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (i == sum) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
