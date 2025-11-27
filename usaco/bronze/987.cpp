#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using str = string;

void solve() {
    int n, k;
    cin >> n >> k;

    int a;
    str s;

    cin >> s;
    n--; a = k-s.size();
    cout << s;

    while(n--) {
        cin >> s;

        if(s.size() <= a) {
            cout << " ";
            a -= s.size();
        }
        else {
            cout << "\n";
            a = k-s.size();
        }

        cout << s;
    }
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
    io("word");
    
    solve();
}
