#include <iostream>
using namespace std;

int main() {
    int num;
    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 1; i <= 10; i++) {
        cin >> num;
        if (i % 2 == 0) {
            sumEven += num;
        } else {
            sumOdd += num;
        }
    }

    if (sumEven >= sumOdd) {
        cout << sumEven - sumOdd;
    } else {
         cout << sumOdd - sumEven;
    }
    return 0;
}