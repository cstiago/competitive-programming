#include <bits/stdc++.h>

#define dbg(x) cerr << (#x) << " is " << (x) << "\n"

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;

const ll lmn = LLONG_MIN;
const ll lmx = LLONG_MAX;
const ll mod = 1e9+7;

struct tile {
    ll x, y;
};

ll gabs(ll n) {
    return abs(n)+1;
}

void solve() {
    vector<tile> v;

    string s; stringstream ss;
    while(getline(cin, s)) {
        if(s.empty()) continue;
        ss.clear(); ss.str(s);

        tile t;
        ss >> t.x; ss.ignore(); ss >> t.y;
        v.push_back(t);
    }

    ll m = lmn;
    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            m = max(m, gabs(v[i].x-v[j].x)*gabs(v[i].y-v[j].y));
        }
    }

    cout << m << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("09a");
    ull t = 1;
    while(t--) {
        solve();
    }
}
