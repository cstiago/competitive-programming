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

int press(vector<vector<int>>& v, int sz, bitset<16> cur, bitset<16> goal, int ind, int b) {
    if(cur == goal) return b;
    if(ind == v.size()) return mx;

    int with = press(v, sz, cur, goal, ind+1, b);

    for(int i = 0; i < v[ind].size(); i++) {
        cur[sz-v[ind][i]-1].flip();
    }
    int without = press(v, sz, cur, goal, ind+1, b+1);

    return min(with, without);
}

void solve() {
    string s; ll ans = 0;
    while(getline(cin, s)) {
        if(s.empty()) continue;

        stringstream ss(s);
        string l; ss >> l;
        string seq = l.substr(1,l.size()-2);
        bitset<16> lights(seq, 0, 16, '.', '#');
        int sz = seq.size();

        vector<vector<int>> v;

        while(ss >> l) {
            if(l[0] == '{') break;

            stringstream ls(l);
            char c; ls >> c;

            vector<int> vi;

            while(c != ')') {
                int i; ls >> i;
                vi.push_back(i);
                ls >> c;
            }

            v.emplace_back(vi);
        }

        ans += press(v, sz, bitset<16>(0), lights, 0, 0);
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
    io("10a");
    ull t = 1;
    while(t--) {
        solve();
    }
}
