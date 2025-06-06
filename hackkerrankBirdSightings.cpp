#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, b[5] = {0, 0, 0, 0, 0};
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
        b[a - 1]++;
    }
    int max = b[0];
    int l = 0;
    for(int i = 1; i < 5; i++) {
        if(max < b[i]) {
            max = b[i];
            l = i;
        }
    }
    cout << l + 1 << endl;
}