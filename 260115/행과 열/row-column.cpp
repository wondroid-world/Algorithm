#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 1;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cnt = i * j;
            cout << cnt << ' ';
        }
        cout << endl;
    }
    return 0;
}