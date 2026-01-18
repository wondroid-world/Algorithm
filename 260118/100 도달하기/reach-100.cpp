#include <iostream>
using namespace std;

int main() {
    int pp = 1;
    int p;
    cin >> p;

    cout << pp << ' ' << p << ' ';

    while (true) {
        int temp = p + pp;
        cout << temp << ' ';

        pp = p;
        p = temp;

        if (temp > 100) break;
    }

    return 0;
}