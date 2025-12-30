#include <bits/stdc++.h>

#define dbg(x) cerr << (#x) << " is " << (x) << "\n"

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using str = string;

const int mn = INT_MIN;
const int mx = INT_MAX;
const ll lmn = LLONG_MIN;
const ll lmx = LLONG_MAX;
const ll mod = 1e9+7;

map<string, vector<string>> m;

void solve() {
    string s;
    while(getline(cin, s)) {
        if(s.empty()) continue;

        stringstream ss(s);
        string from; ss >> from; from.erase(from.size()-1, 1);
        string to; vector<string> v;
        while(ss >> to) v.emplace_back(to);

        m[from] = v;
    }

    stack<pair<string, int>> st({{"you", 0}});
    ll ans = 0;

    while(!st.empty()) {
        auto& cur = st.top();

        if(cur.first == "out") {
            ans++;
            st.pop();
            continue;
        }

        if(cur.second >= m[cur.first].size()) {
            st.pop();
            continue;
        }

        cur.second++;
        st.push({m[cur.first][cur.second-1], 0});
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
    io("11a");
    ull t = 1;
    while(t--) {
        solve();
    }
}
