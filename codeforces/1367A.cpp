#include <bits/stdc++.h>

#define dbg(x) cerr << (#x) << " is " << (x) << "\n"

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;

const int mn = INT_MIN;
const int mx = INT_MAX;
const ll lmn = LLONG_MIN;
const ll lmx = LLONG_MAX;
const ll mod = 1e9+7;

void solve() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(i == 0 || i == s.size()-1 || i&1) cout << s[i];
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
