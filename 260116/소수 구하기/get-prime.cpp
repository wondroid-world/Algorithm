#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                sum++;
            }
        }
        if (sum == 2) {
            cout << i << ' ';
        }
    }\
    return 0;
}