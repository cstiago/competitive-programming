#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;
 
void solve() {
    ll n;
    cin >> n;
 
    bool neg = n%2;
    
    if(n%2) n++;
    
    cout << n/2 * (neg ? -1 : 1) << "\n";
}
 
void fastio() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
}
 
void fileio(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
 
int main() {
    fastio();
    // fileio("");
    
    solve();
}
