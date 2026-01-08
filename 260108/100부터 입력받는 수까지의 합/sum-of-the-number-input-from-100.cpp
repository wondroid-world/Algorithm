#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while (n <= 100) {
        cnt += n++;
    }
    cout << cnt;
    return 0;
}