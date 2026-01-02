#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;

    cin >> S >> T;

    string temp = T;
    T = S;
    S = temp;
    
    cout << S << endl << T;
    return 0;
}