#include <iostream>
using namespace std;

int main() {
    int pp, p;
    cin >> pp >> p;
    int cnt = 2;

    cout << pp << ' ' << p << ' ';

    while (true) {
        int temp = p + 2 * pp;
        cout << temp << ' ';

        pp = p;
        p = temp;
        cnt++;

        if (cnt == 10) break;
    }
    return 0;
}