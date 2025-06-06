#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, c = 0;
    vector<int> v;
    std::cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(((v[i] + v[j]) % k) == 0) {
                std::cout << v[i] << " " << v[j] << endl;
                c++;
            }
        }
    }
    std::cout << c << endl;
}
