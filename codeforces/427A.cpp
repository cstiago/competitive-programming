#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n;
    cin >> n;

    int p = 0, c = 0, i;
    while(n--) {
        cin >> i;
        if(i==-1) {
            if(p == 0) c++;
            else p--;
        }
        else p += i;
    }

    cout << c << "\n";
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
    
    solve();
}
