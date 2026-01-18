#include <iostream>
using namespace std;

int main() {
    int num, point;
    int cnt = 0;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int sum = 0;
        double avg = 0.0;
        for (int j = 0; j < 4; j++) {
            cin >> point;
            sum += point;
        }
        avg = (double) sum / 4;
        if (avg >= 60) {
            cout << "pass" << endl;
            cnt++;
        } else {
            cout << "fail" << endl;
        }
    }

    cout << cnt;
    return 0;
}