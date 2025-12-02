#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using str = string;

const ll mod = 1e9+7;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;

    string t = a+b;

    sort(begin(t), end(t));
    sort(begin(c), end(c));

    cout << (t == c ? "YES" : "NO") << "\n";
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
