#include <iostream>
using namespace std;

int main() {
    char cold1, cold2, cold3;
    int temp1, temp2, temp3;
    char state1, state2, state3;

    cin >> cold1 >> temp1 >> cold2 >> temp2 >> cold3 >> temp3;

    if (cold1 == 'Y' && temp1 >= 37) {
         state1 = 'A';
    } else if (cold1 == 'N' && temp1 >= 37) {
         state1 = 'B';
    } else if (cold1 == 'Y' && temp1 < 37) {
         state1 = 'C';
    } else {
         state1 = 'D';
    };

    if (cold2 == 'Y' && temp2 >= 37) {
         state2 = 'A';
    } else if (cold2 == 'N' && temp2 >= 37) {
         state2 = 'B';
    } else if (cold2 == 'Y' && temp2 < 37) {
         state2 = 'C';
    } else {
         state2 = 'D';
    };

    if (state1 == 'A' && state2 == 'A') {
        cout << 'E';
        return 0;
    }

        if (cold3 == 'Y' && temp3 >= 37) {
         state3 = 'A';
    } else if (cold3 == 'N' && temp3 >= 37) {
         state3 = 'B';
    } else if (cold3 == 'Y' && temp3 < 37) {
         state3 = 'C';
    } else {
         state3 = 'D';
    };

    if ((state1 == 'A' && state3 == 'A') ||(state2 == 'A' && state3 == 'A'))  {
    cout << 'E';
    } else {
        cout << 'N';
    }
    return 0;
}