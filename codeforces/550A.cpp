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
    string s;
    cin >> s;
    bool ab = false, ba = false;
    for(int i = 0; i < s.size()-1; i++) {
        string cur = s.substr(i,2);
        if(!ab && cur == "AB") {
            ab = true;
            i++;
        }
        else if(ab && !ba && cur == "BA") {
            ba = true;
            i++;
        }
    }
    if(!ab || !ba) {
        ab = ba = false;
        for(int i = 0; i < s.size()-1; i++) {
            string cur = s.substr(i,2);
            if(!ba && cur == "BA") {
                ba = true;
                i++;
            }
            else if(ba && !ab && cur == "AB") {
                ab = true;
                i++;
            }
        }
    }
    cout << (ab&ba ? "YES" : "NO") << "\n";
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
