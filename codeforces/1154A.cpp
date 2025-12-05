#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

int v[4];

void solve() {
    for(int i = 0; i < 4; i++) cin >> v[i];
    sort(v, v+4);
    for(int i = 0; i < 3; i++) cout << v[3]-v[i] << " \n"[i==2];
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
    
    solve();
}
