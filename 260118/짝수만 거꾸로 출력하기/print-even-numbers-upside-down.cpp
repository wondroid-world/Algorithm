#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    int cnt = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) {
            arr[i] = num;
        } else {
            arr[i] = 1;
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (arr[n - i - 1] == 1) {
            continue;
        } else {
            cout << arr[n - i - 1] << ' ';
        }
    }
    return 0;
}