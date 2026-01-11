#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (0 <= num && num <= 200) {
            sum += num;
            cnt++;
        }
    }

    double avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << avg;
    return 0;
}