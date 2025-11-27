#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    int n, h;
    cin >> n >> h;

    int w = n;
    int a;
    while(n--) {
        cin >> a;
        if(a > h) w++;
    }

    cout << w << "\n";
}

void fastio() {
    ios_base::sync_with_stdio(0); cin.tie(0);
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
