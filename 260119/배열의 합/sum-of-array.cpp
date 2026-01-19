#include <iostream>
using namespace std;

int main() {
    int val;

    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> val;
            sum += val;
        }
        cout << sum << endl;
    }
    return 0;
}