#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    for(char ch : s) {
        if(ch != '+') {
            t += ch;
        }
    }
    sort(t.begin(), t.end());
    s = "";
    for(size_t i = 0; i < t.size(); i++) {
        s += t[i];
        if(i != t.size() - 1) {
            s += '+';
        }
    }
    cout << s << endl;
}