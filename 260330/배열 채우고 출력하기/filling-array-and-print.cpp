#include <iostream>
using namespace std;

int main() {
    char word;
    char array[10];

    for (int i = 0; i <10; i++) {
        cin >> word;
        array[i] = word; 
    }

    for (int i = 9; i >= 0; i--) {
        cout << array[i];
    }
    
    return 0;
}