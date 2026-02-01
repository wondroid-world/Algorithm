#include <iostream>
using namespace std;

int main() {
    string str1, str2, str3;
    int max,min;

    cin >> str1 >> str2 >> str3;
    int a = str1.length();
    int b = str2.length();
    int c = str3.length();

    if(a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else {
        max = c;
    }

    if(a < b && a < c) {
        min = a;
    } else if (b < a && b < c) {
        min = b;
    } else {
        min = c;
    }    

    cout << max - min;
    return 0;
}