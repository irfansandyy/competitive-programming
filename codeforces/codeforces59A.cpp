#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int u = 0, l = 0;
    cin >> s;
    for(char ch : s) {
        if(isupper(ch)) {
            u++;
        } else {
        l++;
        }
    }
    if(u > l) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
}