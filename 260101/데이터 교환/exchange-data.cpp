#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    int temp = b;
    int temp2 = c;
    b = a;
    c = temp;
    a = temp2;

    cout << a << endl << b << endl << c;
    
    return 0;
}