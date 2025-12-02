#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

bool tp(ll x) {
    int div = 2;

    for(ll i = 2; i <= (x+1)/2; i++) {
        if(x % i == 0) div++;
        if(div == 2 && i*i <= x) return false;
        if(div > 3) return false;
    }

    if(div == 3) return true;

    return false;
}

void solve() {
    int n;
    cin >> n;

    while(n--) {
        ll i;
        cin >> i;

        cout << (tp(i) ? "YES" : "NO") << "\n";
    }
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
