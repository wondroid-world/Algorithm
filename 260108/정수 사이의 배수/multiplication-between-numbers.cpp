#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    int avg = 0;
    int cnt = 0;

    while (a <= b) {
        if (a % 5 == 0 || a % 7 == 0) {
            sum += a;
                    cnt++;
        }
        a++;

    }

    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / cnt;
    return 0;
}