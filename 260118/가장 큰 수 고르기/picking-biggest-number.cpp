#include <iostream>
using namespace std;

int main() {
    int num;
    int max = 1;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (max < num) max = num;
    }

    cout << max;
    return 0;
}