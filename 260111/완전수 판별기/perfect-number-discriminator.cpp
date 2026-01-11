#include <iostream>
using namespace std;

int main() {
    int n;
    char result = 'N';
    cin >> n;
    int num = 1;
    int sum = 0;

    while (num <= n) {
        if (n % num == 0) {
            sum += num;
        }
        num++;
        if (sum == n) {
            result = 'P';
        }
    }

    cout << result;
    return 0;
}