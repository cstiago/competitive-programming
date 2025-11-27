#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t) {
        int a, b;
        cin >> a >> b;
        
        // m must be greater than or equal to at least one of a and b
        // The remainder when m is divided by a must be equal to the remainder when m is divided by b. 
        
        int m = 0;
        
        while(1) {
            if((m >= a || m >= b) &&
                (m % a == m % b)) {
                cout << m << endl;
                break;
            }
            
            m++;
        }
        
        t--;
    }
    
    return 0;
}
