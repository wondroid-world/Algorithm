#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a>> b;
    int arr[10] = {0,};
    int sum = 0;
    while (a > 1) {
        int j = a % b;
        int k = a / b;
        a = k;
        arr[j]++;
    }


    for (int i = 0; i < 10; i++) {
        sum += arr[i] * arr[i];
    }

    cout << sum;
    return 0;
}