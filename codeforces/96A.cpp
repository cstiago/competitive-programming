#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

bool p(string s, char c) {
    return s.find(c) != string::npos;
}

void solve() {
    string s;
    cin >> s;

    cout << (p(s, 'H') | p(s, 'Q') | p(s, '9') ? "YES" : "NO") << "\n";
}

void fastio() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
}

void fileio(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    fastio();
    // fileio("");
    
    solve();
}

