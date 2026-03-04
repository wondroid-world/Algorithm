#include <iostream>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    cin >> M;
    
    while (true) {
         cout << N << endl;
        N /= M;
        if (N == 0) break;
       
     }
    
    return 0;
}
