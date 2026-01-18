#include <iostream>
using namespace std;

int main() {
    int index;
    int arr[6] = {0,};

    for (int i = 0; i < 10; i++) {
        cin >> index;
        arr[index - 1]++; 
    }

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << " - " << arr[i] << endl;
    }
    return 0;
}