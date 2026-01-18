#include <iostream>
using namespace std;

int main() {
    int arr[9] = {0,};
    int num;

    while(true) {
        cin >> num;
        if (num == 0) break;

        if (10 <= num && num < 20) {
            arr[0]++;
        }  else if (20 <= num && num < 30) {
            arr[1]++;
        } else if (30 <= num && num < 40) {
            arr[2]++;
        } else if (40 <= num && num < 50) {
            arr[3]++;
        } else if (50 <= num && num < 60) {
            arr[4]++;
        } else if (60 <= num && num < 70) {
            arr[5]++;
        } else if (70 <= num && num < 80) {
            arr[6]++;
        } else if (80 <= num && num < 90) {
            arr[7]++;
        } else if (90 <= num && num < 100) {
            arr[8]++;
        }
    }

    for (int i = 0; i <= 8; i++) {
        cout << i + 1 << " - " << arr[i] << endl;
    }

    return 0;
}