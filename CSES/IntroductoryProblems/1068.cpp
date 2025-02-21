#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void solve() {
    ll n;
    cin >> n;
 
    cout << n;
 
    while(n != 1) {
        cout << ' ';
 
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }
 
        cout << n;
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
