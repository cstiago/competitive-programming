#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lll = __int128;

void solve() {
    string s, t;
    cin >> s;

    string r = regex_replace(s, regex("WUB"), " ");
    stringstream ss(r);

    ss >> t;
    cout << t;

    while(ss >> t) cout << " " << t;
    cout << "\n";
}

void io(const string& s = "") {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    if(!s.empty()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("");
    
    solve();
}
