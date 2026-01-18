#include <iostream>
using namespace std;

int main() {
    char word;

    for (int i = 1; i <= 10; i++) {
        cin >> word;
        if (i == 2 || i == 5 || i == 8) {
            cout << word << ' ';
        }
    }
    return 0;
}