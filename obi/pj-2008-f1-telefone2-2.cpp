#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int t[] = {0, 0, 3, 3, 3, 3, 3, 4, 3, 3};

    for(int j = 0; j < 10; j++) {
        if(!j) {
            continue;
        }

        t[j] = t[j] + t[j-1];
    }
    
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 65 && s[i] < 90) {
            int n = s[i] - 65;

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
