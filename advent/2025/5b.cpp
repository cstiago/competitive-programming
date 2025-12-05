#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    string s; stringstream ss;
    ll from, to;
    vector<pair<ll, ll>> v, w;

    while(getline(cin, s)) {
        if(s.empty()) break;
        ss.clear(); ss.str(s);
        ss >> from; ss.ignore(); ss >> to;

        v.push_back({from, to});
    }

    sort(v.begin(), v.end());
    w.emplace_back(v[0]);

    for(int i = 1; i < v.size(); i++) {
        if(v[i].first-1 <= w[w.size()-1].second) w[w.size()-1].second = max(w[w.size()-1].second, v[i].second);
        else w.emplace_back(v[i]);
    }

    ll ans = 0;
    for(auto [a,b] : w) {
        ans += b - a + 1;
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
    io("5b");
    
    solve();
}
