#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    if (a <= b) {
    while (a <= b) {
        if (a % 5 == 0) {
            sum += a;
        }
        a++;
    }
    } else {
            while (b <= a) {
        if (b % 5 == 0) {
            sum += b;
        }
        b++;
    }
    }
    cout << sum;
    return 0;
}