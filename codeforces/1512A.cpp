#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n; cin >> n;
    vector<int> v(n); for(int i = 0; i < n; i++) cin >> v[i];
    map<int, int> m; for(int i = 0; i < 3; i++) m[v[i]]++;
    int x = ((*m.begin()).second > 1 ? (*m.begin()).first : (*next(m.begin())).first);
    for(int i = 0; i < n; i++) if(v[i] != x) cout << i+1 << "\n";
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
