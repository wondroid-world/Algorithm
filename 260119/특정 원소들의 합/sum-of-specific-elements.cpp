#include <iostream>
using namespace std;

int main() {
    int val;
    int sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> val;
            if (i >= j) sum += val;
        }        
    }

    cout << sum;
    return 0;
}