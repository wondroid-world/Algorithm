#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int progress = 1;
    int converse = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 1) {
                cout << progress << ' ';
                progress++;
            } else {
                cout << converse << ' ';
                converse--; 
            }
        }
        cout << endl;
        if (i % 2 == 1) {
            converse = progress + n - 1;
        } else {
            progress = converse + n + 1;
        }
       
        
    }
    return 0;
}