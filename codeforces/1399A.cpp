#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(begin(v), end(v));
    bool pos = true;
    for(int i = 1; i < n; i++) if(abs(v[i]-v[i-1]) > 1) {pos = false; break;}
    cout << (pos ? "YES" : "NO") << "\n";
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
