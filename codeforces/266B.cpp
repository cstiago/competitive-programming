#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while(t--) {
        for(int i = 0; i < n-1; i++) {
            if(s.substr(i, 2) == "BG") {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }

    cout << s << "\n";
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
