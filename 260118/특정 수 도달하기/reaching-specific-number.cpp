#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    double avg = 0;
    int num;
    
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num >= 250) break;
        sum += num;
        avg = (double) sum / (i + 1);
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << avg;
    return 0;
}