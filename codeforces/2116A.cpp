#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << (min(a, c) >= min(b, d) ? "Gellyfish" : "Flower") << "\n";
    
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    ll t; cin >> t; while(t--)
        solve();
        
    return 0;
}
