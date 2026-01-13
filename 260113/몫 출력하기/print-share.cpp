#include <iostream>
using namespace std;

int main() {    
    int cnt = 0;
    int num;
    while (cnt < 3) {
        cin >> num;
        if (num % 2 == 0) {
            cout << num / 2 << endl;
            cnt++;
        }
    }
    return 0;
}