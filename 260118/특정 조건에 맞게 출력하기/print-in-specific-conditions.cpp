#include <iostream>
using namespace std;

int main() {
    int num;
    int arr[100];
    int cnt = 0;

    for (int i = 0; i < 100; i++) {
        cin >> num;
        if (num == 0) break;
        arr[i] = num;
        cnt++;
    }

    for (int i = 0; i < cnt; i++) {
        if (arr[i] % 2 == 1) {
            arr[i] += 3;
        } else {
            arr[i] /= 2;
        }
        cout << arr[i] << ' ';
    }
    return 0;
}