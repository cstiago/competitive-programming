#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

bool lucky(int n, int d) {
    if(d > n) return false;
    if(n % d == 0) return true;

    bool div = false;
    d *= 10;
    div |= lucky(n, d+4);
    div |= lucky(n, d+7);

    return div;
}

void solve() {
    int n;
    cin >> n;

    cout << (lucky(n, 4) | lucky(n, 7) ? "YES" : "NO") << "\n";
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

