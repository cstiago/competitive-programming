#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll;
 
void solve() {
    ll n;
    cin >> n;

    if(n >= 2 && n <= 3) {
        cout << "NO SOLUTION" << '\n';
        return;
    }

    for(ll i = 1; i < n; i += 2) {
        cout << i + 1 << ' ';
    }

    for(ll i = 0; i < n; i += 2) {
        cout << i + 1;

        if(i < n - 1) {
            cout << ' ';
        }
    }

    cout << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    // ll t; cin >> t; while(t--)
    solve();
 
    return 0;
}
