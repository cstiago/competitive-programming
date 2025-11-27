#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<int> e, o;

    int vi;
    for(int i = 1; i <= n; i++) {
        cin >> vi;
        if(vi&1) o.push_back(i);
        else e.push_back(i);

        if(e.size() && o.size() && e.size() != o.size()) break;
    }

    cout << (o.size() == 1 ? o[0] : e[0]) << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io();
    
    solve();
}
