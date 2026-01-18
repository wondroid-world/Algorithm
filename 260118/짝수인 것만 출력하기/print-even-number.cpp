#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            cout << num << ' ';
        }
    }
    return 0;
}