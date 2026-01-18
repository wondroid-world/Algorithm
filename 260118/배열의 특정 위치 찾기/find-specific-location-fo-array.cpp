#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int sum2 = 0;
    int cnt = 0;
    int num;

    for (int i = 1; i <= 10; i++) {
        cin >> num;
        if (i % 2 == 0) {
            sum += num;
        }
        if (i % 3 == 0) {
            sum2 += num;
            cnt++;
        }
    }

    double avg = (double) sum2 / cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << avg;
    return 0;
}