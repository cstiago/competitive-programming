#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << "\n";
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
    ull t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
