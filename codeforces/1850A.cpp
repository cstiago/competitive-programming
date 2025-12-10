#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

int v[3];

void solve() {
    for(int i = 0; i < 3; i++) cin >> v[i];
    sort(v,v+3);
    cout << (v[1]+v[2]>=10 ? "YES" : "NO") << "\n";
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
