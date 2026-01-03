#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    int sum = a + b + c;

    cout << fixed;
    cout.precision(0);

    cout << sum << endl;
    cout << (double)sum / 3;
    return 0;
}