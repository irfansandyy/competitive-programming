#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, n;
    vector<string> s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string a = "";
        cin >> a;
        s.push_back(a);
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == "X++" || s[i] == "x++" || s[i] == "++X" || s[i] == "++x") {
            x++;
        } else if (s[i] == "X--" || s[i] == "x--" || s[i] == "--X" || s[i] == "--x") {
            x--;
        }
    }
    cout << x << endl;
}