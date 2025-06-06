#include <iostream>
using namespace std;

int main() {
    int m, n, s = 0;
    cin >> m >> n;
    s = ((m*n) - (m*n % 2))/2;
    cout << s;
}