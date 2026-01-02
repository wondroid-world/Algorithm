#include <iostream>
using namespace std;

int main() {
    double N;
    double ft = 30.48;
    
    cin >> N;
    cout << fixed;
    cout.precision(1);

    cout << N * ft;
    return 0;
}