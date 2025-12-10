#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n, c = 0; cin >> n;
    while(n--) {
        int i; cin >> i;
        c += i;
    }
    cout << (c&1 ? "NO" : "YES") << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("");
    
    int t; cin >> t; while(t--)
    solve();
}
