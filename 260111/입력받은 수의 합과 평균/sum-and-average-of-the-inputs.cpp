#include <iostream>
using namespace std;

int main() {
    int n, num;
    int sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        sum += num;
    }
    double avg = (double) sum / n;

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << avg;
    return 0;
}