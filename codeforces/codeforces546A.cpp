#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, n, w, j;
    cin >> k >> n >> w;
    for(int i = 0; i < w; i++) {
        j += i + 1;
    }
    k *= j;
    cout << (k > n ? abs(k - n) : 0) << endl;
}