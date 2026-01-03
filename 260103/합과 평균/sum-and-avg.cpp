#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    cout << fixed;
    cout.precision(1);

    int sum = a + b;
    cout << sum << ' ' << (double)sum / 2;
    return 0;
}