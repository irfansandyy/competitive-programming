#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char> c;

    for(char ch : s) {
        c.insert(ch);
    }
    if(c.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}