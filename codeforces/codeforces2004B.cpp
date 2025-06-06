#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int al, ar, bl, br;
        cin >> al >> ar >> bl >> br;
        if (al < bl) {
            if (ar < bl) {
                cout << 1 << endl;
            } else if (ar >= bl && ar <= br) {
                cout << ar - bl + 2 - (ar == br ? 1:0) << endl;
            } else {
                cout << br - bl + 2 - (ar == br ? 1:0) << endl;
            }
        } else if (al >= bl && al <= br) {
            if (ar <= br) {
                cout << ar - al + 2 - (al == bl ? 1:0) - (ar == br ? 1:0) << endl;
            } else {
                cout << br - al + 2 - (al == bl ? 1:0) - (ar == br ? 1:0) << endl;
            }
        } else {
            cout << 1 << endl;
        }
    }
}