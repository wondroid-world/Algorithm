#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[i] = num * num;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}