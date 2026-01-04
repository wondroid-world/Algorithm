#include <iostream>
using namespace std;

int main() {
    int aMath, aEnglish, bMath, bEnglish;
    cin >> aMath >> aEnglish >> bMath >> bEnglish;
    if (aMath > bMath) {
        cout << 'A';
    } else if (aMath < bMath) {
        cout << 'B';
    } else {
         if (aEnglish > bEnglish) {
        cout << 'A';
    } else if (aEnglish < bEnglish) {
        cout << 'B';
    } 
    }
    return 0;
}