#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    int m = -1;

    for(auto& i : v) {
        cin >> i;
        m = max(m, i);
    }

    int c = 0;
    for(auto i : v) {
        c += m-i;
    }

    cout << c << "\n";
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
