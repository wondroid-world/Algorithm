#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int cnt = 0;
    double avg = 0.0;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num == 0) break;
        sum += num; 
        cnt++;
    }

    avg = (double)sum / cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << avg;
    return 0;
}