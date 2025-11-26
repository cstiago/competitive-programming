#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lll = __int128;

void solve() {
    int k, l, m, n, d, ans = 0;
    cin >> k >> l >> m >> n >> d;

    while(d > 0) {
        ans += (d%k==0) | (d%l==0) | (d%m==0) | (d%n==0);
        d--;
    }
    
    cout << ans << "\n";
}

void io(const string& s = "") {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    if(!s.empty()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("");
    
    solve();
}
