#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    int n, p;
    cin >> n;

    int a = n;
    long double s = 0;
    while(a--) {
        cin >> p;
        s+=p;
    }

    cout << fixed << setprecision(12) << s/n << "\n";
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
