#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1 && k > 0; i++) {
            int increase = min(k, (a[i + 1] - a[i]) * (i + 1));
            for (int j = 0; j <= i; j++) {
                a[j] += increase / (i + 1);
            }
            k -= increase;
        }
        int A = 0, B = 0;
        for (int i = n - 1; i >= 0; i--) {
            if ((n - 1 - i) % 2 == 0) {
                A += a[i];
            } else {
                B += a[i];
            }
        }
        cout << A - B << endl;
    }
}