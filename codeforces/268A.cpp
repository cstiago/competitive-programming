#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
    int n;
    cin >> n;

    vector<int> v;
    map<int, int> m;
    int a, b;
    while(n--) {
        cin >> a >> b;
        v.push_back(a);
        m[b]++;
    }

    int c = 0;
    for(auto& i : v) c += m[i];

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
    io();
    
    solve();
}
