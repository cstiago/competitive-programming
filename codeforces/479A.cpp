#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lll = __int128;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int d = max(max(max((a+b)*c, a*(b+c)), a+b+c), a*b*c);
    cout << d << "\n";
}

void io(const string& s = "") {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    if(!s.empty()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("");
    
    solve();
}
