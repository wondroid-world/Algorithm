#include <iostream>
using namespace std;

int main() {
    int pp, p;
    cin >> pp >> p;

    cout << pp << ' ' << p << ' ';

    for (int i = 2; i < 10; i++) {
        int temp = pp + p;
        cout << (temp % 10) << ' ';
        pp = p;
        p = (temp % 10);
    }
    return 0;
}