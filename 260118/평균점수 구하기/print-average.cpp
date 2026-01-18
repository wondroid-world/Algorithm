#include <iostream>
using namespace std;

int main() {
    double num, sum;

    for (int i = 0; i < 8; i++) {
        cin >> num;
        sum += num;
    }

    double avg = sum / 8;

    cout << fixed;
    cout.precision(1);

    cout << avg;
    return 0;
}