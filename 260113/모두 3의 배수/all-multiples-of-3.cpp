#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0 && d % 3 == 0 && e % 3 == 0) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}