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
    int v[3];
    for(int i = 0; i < 3; i++) cin >> v[i];
    sort(v, v+3);
    if(v[2]-v[0] >= 10) cout << "check again";
    else cout << "final " << v[1];
    cout << "\n";
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
