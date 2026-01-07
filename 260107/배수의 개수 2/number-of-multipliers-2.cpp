#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int num;
    int cnt = 0;

    while (i <= 10) {
        cin >> num;
        if (num % 2 == 1) {
            cnt++;
        }
        i++;
    }
    cout << cnt;
    return 0;
}