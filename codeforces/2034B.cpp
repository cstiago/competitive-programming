#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t) {
        int n, m, k;
        cin >> n >> m >> k;
        
        char s[n];
        int b[n];
        
        for(int i = 0; i < n; i++) {
            cin >> s[i];
            b[i] = s[i] - '0';
        }
        
        int o = 0;
        
        for(int i = 0; i < n; i++) {
            if(!b[i]) {
                for(int j = i; j < n && j - i < m; j++) {
                    if(b[j]) {
                        i = j;
                        break;
                    }
                    
                    if(j - i == m - 1) {
                        int p = 0;
                        
                        for(p = j; p < n && p - j < k; p++) {
                            b[p] = 1;
                        }
                        
                        i = p;
                        o++;
                    }
                }
                
                
            }
        }
        
        cout << o << endl;
        
        o = 0;
        t--;
    }
    
    return 0;
}
