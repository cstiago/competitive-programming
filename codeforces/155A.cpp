#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n;
    cin >> n; n--;

    int i;
    int a = 0, mn = INT_MAX, mx = INT_MIN;
    cin >> i; mn = i; mx = i;
    while(n--) {
        cin >> i;
        if(i < mn || i > mx) a++;

        mn = min(mn, i);
        mx = max(mx, i);
    }

    cout << a << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("");
    
    solve();
}
