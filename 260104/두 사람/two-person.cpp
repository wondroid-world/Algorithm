#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, c;
    string b, d;
    cin >> a >> b >> c >> d;

    if ((a >= 19 && b == "M") || (c >= 19 && d == "M")) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}