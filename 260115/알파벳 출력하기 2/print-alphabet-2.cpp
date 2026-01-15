#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i <= j) {
                cout << (char) (65 + cnt)<< " ";
                if ((char) (65 + cnt) == 'Z'){
                    cnt = 0;
                }else cnt++;
            } else {
                cout << "  ";
            }
        }
        cout << endl;       
    }
    return 0;
}