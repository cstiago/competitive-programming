#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n), s(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    sort(begin(v), end(v));
    s[0] = v[0];

    for(int i = 1; i < n; i++) {
        s[i] = s[i-1] + v[i];
    }

    int c = 0;
    for(int i = n-2; i >= 0; i--) {
        if(s[n-1]-s[i] > s[i]) {
            c = n-1-i;
            break;
        }
    }
    if(!c) c = n;

    cout << c << "\n";
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

