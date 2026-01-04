#include <iostream>
using namespace std;

int main() {
    int aMath, aEnglish, bMath, bEnglish;
    cin >> aMath >> aEnglish >> bMath >> bEnglish;

    if (aMath > bMath && aEnglish > bEnglish) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}