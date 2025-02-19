#include <bits/stdc++.h>
using namespace std;

int main() {
    char c[16];
    int t[] = {0, 0, 3, 3, 3, 3, 3, 4, 3, 3};

    for(int j = 0; j < 10; j++) {
        if(!j) {
            continue;
        }

        t[j] = t[j] + t[j-1];
    }
    
    for(int i = 0; i < 15; i++) {
        c[i] = getchar();

        if(c[i] == '\n')
            break;

        if(c[i] >= 65 && c[i] < 90) {
            int n = c[i] - 65;

            for(int k = 2; k <= 9; k++) {
                if(n < t[k]) {
                    cout << k;
                    break;
                }
            }
        }
        else {
            cout << "-";
        }
    }
    
    return 0;
}
