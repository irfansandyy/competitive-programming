#include <iostream>
#include <vector>

int main() {
    int n;
    int mloc[2], ploc[2];
    std::cin >> n;
    std::vector<std::vector<char>> v;

    for(int i = 0; i < n; i++) {
        std::vector<char> w;
        for(int j = 0; j < n; j++) {
            char a = ' ';
            std::cin >> a;
            w.push_back(a);

            if(a == 'm') {
                mloc[0] = i;
                mloc[1] = j;
            } 
            if(a == 'p') {
                ploc[0] = i;
                ploc[1] = j;
            }
        }
        v.push_back(w);
    }

    int dx = mloc[0] - ploc[0];
    int dy = mloc[1] - ploc[1];

    while(dx != 0) {
        if(dx > 0) {
            std::cout << "UP" << std::endl;
            dx--;
        } else if(dx < 0) {
            std::cout << "DOWN" << std::endl;
            dx++;
        }
    }

    while(dy != 0) {
        if(dy > 0) {
            std::cout << "LEFT" << std::endl;
            dy--;
        } else if(dy < 0) {
            std::cout << "RIGHT" << std::endl;
            dy++;
        }
    }
    return 0;
}