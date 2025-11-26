#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lll = __int128;

void solve() {
    int n;
    cin >> n;

    map<char, int> m{
        {'T', 4},
        {'C', 6},
        {'O', 8},
        {'D', 12},
        {'I', 20}
    };

    string s;
    int c = 0;
    while(n--) {
        cin >> s;
        c += m[s[0]];
    }

    cout << c << "\n";
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
