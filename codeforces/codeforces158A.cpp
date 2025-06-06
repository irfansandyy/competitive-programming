#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, s, f = 0;
    vector<int> v;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        if(i == (k - 1)) {
            s = a;
        }
    }
    for(int i = 0; i < n; i++) {
        if(v[i] >= s && v[i] != 0) {
            f++;
        }
    }
    cout << f;
}