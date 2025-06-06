#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int solved;
    vector<int> p, v, t;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b, c = 0;
        cin >> a >> b >> c;
        p.push_back(a);
        v.push_back(b);
        t.push_back(c);
    }
    for(int i = 0; i < n; i++) {
        if((p[i] + v[i] + t[i]) > 1) {
            solved++;
        }
    }
    cout << solved;
}