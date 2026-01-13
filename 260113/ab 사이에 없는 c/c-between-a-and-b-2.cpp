#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> c >> a >> b;

    bool satisfied = false;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            satisfied = true;
            break;
        }
    }

    if (satisfied) {
        cout << "YES";
    } else {
        cout << "NO";

    }
    return 0;
}