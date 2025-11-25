#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m,n;
    cin >> n >> m;
    
    int c = 0;
    
    for(int a = 0; a*a <= n; a++) {
        int b = n - a*a;
        
        if(a + b*b == m) c++;
    }
    
    cout << c << '\n';
    
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
