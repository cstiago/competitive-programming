#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int t = 240 - k;
    int c = 1;
    
    while(t >= 5 * c) {
        t -= 5 * c;
        c++;
        
        if(c > n) break;
    }
    
    c--;
    
    cout << c << "\n";
    
    return;
}

void io() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}

int main() {
    io();
    
    // ll t; cin >> t; while(t--)
        solve();
        
    return 0;
}
