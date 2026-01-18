#include <iostream>
using namespace std;

int sum;
int num;

int main() {
    
    for (int i = 1; i <= 10; i++) {
        cin >> num;
        if (i == 3 || i == 5 || i == 10) {
            sum += num;
        }
    }

    cout << sum;
    return 0;
}