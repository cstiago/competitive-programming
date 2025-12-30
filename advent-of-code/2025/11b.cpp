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

struct node {
    string dev; int mask;
    node(string s, int i) {
        dev = s; mask = i;
    }
};

map<string, vector<string>> m;
map<string, vector<ll>> memo({{"out", vector<ll>(4, -1)}});

void solve() {
    string s;
    while(getline(cin, s)) {
        if(s.empty()) continue;

        stringstream ss(s);
        string from; ss >> from; from.erase(from.size()-1, 1);
        string to; vector<string> v;
        while(ss >> to) v.emplace_back(to);

        m[from] = v;
        memo[from] = vector<ll>(4, -1);
    }

    stack<node> st({node("svr", 0b00)});
    ll ans = 0;

    while(!st.empty()) {
        auto cur = st.top();

        if(memo[cur.dev][cur.mask] >= 0) {
            st.pop();
            continue;
        }

        bool dac = cur.dev == "dac";
        bool fft = cur.dev == "fft";
        int nmask = cur.mask | (dac << 1) | fft;

        if(memo[cur.dev][cur.mask] == -2) {
            ll sum = 0;

            for(auto& n : m[cur.dev]) {
                sum += memo[n][nmask];
            }

            memo[cur.dev][cur.mask] = sum;
            st.pop();
            continue;
        }

        memo[cur.dev][cur.mask] = -2;

        if(cur.dev == "out") {
            memo[cur.dev][cur.mask] = cur.mask == 0b11;
            st.pop();
            continue;
        }

        for(auto n : m[cur.dev]) {
            st.push(node(n, nmask));
        }
    }

    cout << memo["svr"][0] << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("11b");
    ull t = 1;
    while(t--) {
        solve();
    }
}
