#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;
 
void solve() {
    ll n;
    cin >> n;
 
    ll total = (1 + n) * n / 2;
    ll sum = 0;
 
    for(ll i = 0; i < n - 1; i++) {
        ll num;
        cin >> num;
 
        sum += num;
    }
 
    cout << total - sum << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    // ll t; cin >> t; while(t--)
    solve();
  
    return 0;
}
