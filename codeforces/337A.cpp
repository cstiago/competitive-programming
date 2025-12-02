#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> v;
    int mm = m;
    while(mm--) {
        int i;
        cin >> i;
        v.push_back(i);
    }
    sort(begin(v), end(v));
    int l = INT_MAX;
    for(int i = 0, j = n-1; j < m; i++, j++) {
        l = min(l, v[j]-v[i]);
    }
    cout << l << "\n";
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
