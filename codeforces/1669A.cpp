#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n, x;
    cin >> n;

    if(n <= 1399) x = 4;
    else if(1400 <= n && n <= 1599) x = 3;
    else if(1600 <= n && n <= 1899) x = 2;
    else x = 1;

    cout << "Division " << x << "\n";
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
