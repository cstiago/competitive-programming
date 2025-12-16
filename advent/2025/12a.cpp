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

void solve() {
    char gifts[6][3][3];
    vector<int> minh(6, mx), minw(6, mx);
    string s;

    for(int i = 0; i < 6; i++) {
        while(getline(cin, s) && s.empty());
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                cin >> gifts[i][j][k];
            }
        }
    }

    int filter = 0;
    vector<vector<int>> vt;
    while(cin >> s) {
        int xi = s.find('x'); int ci = s.find(':');
        int a = stoi(s.substr(0, xi)), b = stoi(s.substr(xi+1, ci-2));
        ll sum = 0;
        vector<int> v{a, b};

        for(int i = 0; i < 6; i++) {
            int si; cin >> si;
            v.push_back(si);
            sum += si;
        }

        if(sum*7 <= a*b) {
            filter++;
            vt.emplace_back(v);
        }
    }

    cout << filter << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("12a");
    ull t = 1;
    while(t--) {
        solve();
    }
}
