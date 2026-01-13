#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool satisfied = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            satisfied = false;
            break;
        }
    }

    if (satisfied) {
        cout << 'P';
    } else {
          cout << 'C';
    }
    return 0;
}