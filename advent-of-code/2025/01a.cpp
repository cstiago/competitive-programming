#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    char c;
    int a;
    
    int s = 50, ans = 0;
    while(cin >> c >> a) {
        s += (c == 'L' ? -1 : 1) * a % 100;
        if(s < 0) s += 100;
        s %= 100;
        if(s == 0) ans++;
    }

    cout << ans << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("01a");
    
    solve();
}
