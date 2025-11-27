#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    string s;
    cin >> s;

    string hello = "hello";
    bool h = false;
    int hi = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == hello[hi]) {
            hi++;
        }
        if(hi == 5) {
            h = true;
            break;
        }
    }

    cout << (h ? "YES" : "NO") << "\n";
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
