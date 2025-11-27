#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

#define endl '\n'
#define spc ' '

void solve() {
    int v[7];
    for(int i = 0; i < 7; i++) cin >> v[i];

    sort(v, v+7);

    cout << v[0] << spc << v[1] << spc << v[6]-(v[0]+v[1]) << endl;
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io();
    
    solve();
}
