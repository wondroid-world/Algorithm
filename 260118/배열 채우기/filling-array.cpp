#include <iostream>
using namespace std;

int main() {
    int num;
    int arr[10];
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num == 0) break;
        arr[i] = num;
        cnt++;
    }

    for (int i = cnt; i >= 1; i--) {
        cout << arr[i - 1] << ' ';
    }
    return 0;
}