#include <iostream>
using namespace std;

int main() {
    int n, index;
    int arr[9] = {0,};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> index;
        arr[index - 1]++;
    }

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}