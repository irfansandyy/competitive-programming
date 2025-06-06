#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> p;
    for(int i = 0; i < n; i++) {
        string o = "";
        cin >> o;
        p.push_back(o);
    }
    for(int i = 0; i < n; i++) {
        if(p[i].length() > 4) {
            cout << p[i].front() << p[i].length() - 2 << p[i].back() << endl;
        } else {
            cout << p[i] << endl;
        }
    }
}