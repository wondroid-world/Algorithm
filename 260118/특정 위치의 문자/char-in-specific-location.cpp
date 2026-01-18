#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char word;
    int idx = -1;

    cin >> word;
    
    for (int i = 0; i < 6; i++) {
       if (arr[i] == word) idx = i; 
    }

    if (idx == -1) {
        cout << "None";
    } else {
        cout << idx;
    }

    return 0;
}