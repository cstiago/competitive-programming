#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lll = __int128;

void solve() {
    int n, c = 0;
    cin >> n;

    vector<int> v{100, 20, 10, 5, 1};

    for(auto i : v) {
        c += n/i;
        n %= i;
    }

    cout << c << "\n";
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
