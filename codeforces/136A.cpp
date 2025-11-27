#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    int n;
    cin >> n;

    int p;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> p;
        v[p-1] = i+1;
    }

    for(int i = 0; i < n; i++) {
        cout << v[i] << " \n"[i == n-1];
    }
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
