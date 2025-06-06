#include <iostream>
using namespace std;

int main() {
    int n, a = 0;
    string s;
    cin >> n >> s;
    char b = s[0];
    for (int i = 1; i < n; i++) {
        if(s[i] == b) {
            a++;
        }
        b = s[i];
    }
    cout << a << endl;
}