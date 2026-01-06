#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;
    cin >> N;
    while(i <= N) {
        i *= 3;
        cout << i << " ";
    }
    return 0;
}