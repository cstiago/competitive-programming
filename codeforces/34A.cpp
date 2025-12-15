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
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    pair<int, int> p{1,n};
    int m = abs(v[n-1]-v[0]);
    for(int i = 0; i < n-1; i++) {
        int x = abs(v[i]-v[i+1]);
        if(x < m) {
            m = x;
            p = {i+1, i+2};
        }
    }
    cout << p.first << " " << p.second << "\n";
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
    ull t = 1;
    while(t--) {
        solve();
    }
}
