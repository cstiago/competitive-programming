#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> s = {a, b, c, d};

    cout << 4-s.size() << "\n";
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
