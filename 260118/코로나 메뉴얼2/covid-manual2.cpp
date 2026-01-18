#include <iostream>
using namespace std;

int main() {
    int temp;
    char symtom;
    int arr[4] = {0,};
    char sri = 'E';

    for(int i = 1; i <= 3; i++) {
        cin >> symtom >> temp;
        if (symtom == 'Y' && temp >= 37) {
            arr[0]++;
        } else if (symtom == 'N' && temp >= 37) {
            arr[1]++;
        } else if (symtom == 'Y' && temp < 37) {
            arr[2]++;
        } else if (symtom == 'N' && temp < 37) {
            arr[3]++;
        }
    }

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << ' ';
    }
    if (arr[0] >= 2) cout << 'E';
    return 0;
}