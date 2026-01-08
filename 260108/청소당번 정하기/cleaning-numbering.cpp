#include <iostream>
using namespace std;

int main() {
    int n, cntRoom, cntRail, cntClean;
    cin >> n;
    
    cntRoom = n / 2 - n / 6;
    cntRail = n / 3 - n / 12;
    cntClean = n / 12;

    cout << cntRoom << " " << cntRail << " " << cntClean;

    return 0;
}