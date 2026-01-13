#include <iostream>
using namespace std;
    int sum;

int main() {
    int cnt = 0;

    int age;
    double avg;

    while (true) {
        cin >> age;
        if (20 <= age && age <= 29) {
            sum += age;
            cnt++;
        } else {
            break;
        }
    }

    cout << fixed;
    cout.precision(2);
    avg = (double)sum / cnt;
    cout << avg;
    return 0;
}