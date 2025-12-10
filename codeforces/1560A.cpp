#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

vector<int> v;

void solve() {
    int n; cin >> n;
    cout << v[n-1] << "\n";
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
    
    for(int i = 1; i <= 1666; i++) if(i % 3 != 0 && i % 10 != 3) v.push_back(i);
    int t; cin >> t; while(t--)
    solve();
}
