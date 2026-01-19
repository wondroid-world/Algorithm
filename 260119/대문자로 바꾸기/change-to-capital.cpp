#include <iostream>
using namespace std;

int main() {
    char word;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> word;
            cout << (char) toupper(word) << ' ';
        }
        cout << endl;
    }
    return 0;
}