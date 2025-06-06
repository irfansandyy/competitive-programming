#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if(n > 2) {
            int x[n];
            for(int j = 0; j < n; j++) {
                cin >> x[j];
         }
            cout << "NO" << endl;
            continue;
        } else if (n == 1) {
            int x[n];
            for(int j = 0; j < n; j++) {
                cin >> x[j];
            }
            cout << "YES" << endl;
            continue;
        }
        int x[n];
        for(int j = 0; j < n; j++) {
            cin >> x[j];
        }
        if (abs(x[0] - x[1]) != 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}