#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;

    if (y % 4 == 0) {
        // 윤년
 if (y % 100 == 0 && y % 400 != 0) {
              cout << "false";
        } else {
 cout << "true";
        }
       
    } else {
        // 평년
        cout << "false";
    }
    return 0;
}