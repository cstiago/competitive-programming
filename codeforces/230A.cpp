#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    bool def = true;
    int s, n;
    cin >> s >> n;
    pair<int, int> p;
    vector<pair<int, int>> v(n);
    while(n--){
        cin >> p.first; cin >> p.second;
        v.push_back(p);
    }
    sort(begin(v), end(v));
    for(auto& [a, b] : v) {
        if(s > a) s+=b;
        else {
            def = false;
            break;
        }
    }
    cout << (def ? "YES" : "NO") << "\n";
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
