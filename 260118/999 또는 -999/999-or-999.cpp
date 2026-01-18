#include <iostream>
#include <climits>
using namespace std;

int main() {
    int max = INT_MIN;
    int min = INT_MAX;
    int num;

    while (true) {
        cin >> num;
        if (num == 999 || num == -999) break;
        if (num > max) max = num;
        if (num < min) min = num;
    }

    cout << max << ' ' << min;
    return 0;
}