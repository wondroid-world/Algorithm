#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    for (int i = 1, n = 1; n <= 5; i++) {
        cout << N * i << " ";
        n++;
    }
    return 0;
}