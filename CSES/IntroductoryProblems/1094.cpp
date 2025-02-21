#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void solve() {
    ll n;
    cin >> n;

    ll x;
    cin >> x;

    ll moves = 0;
    ll previous = x;

    for(int i = 1; i < n; i++) {
        cin >> x;

        if(previous > x) {
            moves += previous - x;
        }
        else {
            previous = x;
        }
    }

    cout << moves << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    // ll t; cin >> t; while(t--)
    solve();
 
    return 0;
}