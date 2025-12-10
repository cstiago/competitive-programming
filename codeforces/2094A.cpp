#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    string s; stringstream ss;
    while(getline(cin, s) && s.empty());
    ss.str(s);

    while(ss >> s) {
        cout << s[0];
    }
    cout << "\n";
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
