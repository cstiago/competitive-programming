#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    ll n, k;
    cin >> n >> k;

    ll m = ceil(n/2.0L);
    bool even = k > m;

    ll ans = even ? (k-m)*2 : k*2-1;

    cout << ans << "\n";
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
