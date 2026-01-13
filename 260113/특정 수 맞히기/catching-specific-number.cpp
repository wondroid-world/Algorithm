#include <iostream>
using namespace std;

int main() {
    int num;

    while (true) {
        cin >> num;
        if (num == 25) {
            cout << "Good" << endl;
            break;
        } else if (num > 25) {
            cout << "Lower" << endl;
        } else {
            cout << "Higher" << endl;
        }
    }

    return 0;
}