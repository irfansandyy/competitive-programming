#include <iostream>
using namespace std;

int main() {
    int i = 0;
    string n;
    cin >> n;
    for(char ch : n) {
        if(ch == '4' || ch == '7') {
            i++;
        }
    }
    if(i == 4 || i == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}