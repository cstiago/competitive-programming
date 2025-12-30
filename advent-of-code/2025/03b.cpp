#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

ll p(ll i) {
    ll j = 1; i--;
    while(i--) j*=10;
    return j;
}

ll calc(string::iterator first, string::iterator last, ll dig, ll acc) {
    if(dig == 0) return acc;

    auto n = max_element(first, last);

    return calc(n+1, last+1, dig-1, acc+p(dig)*((ll)(*n)-'0'));
}

void solve() {
    string l;
    ll j = 0;

    while(cin >> l) {
        j += calc(begin(l), end(l)-11, 12, 0);
    }

    cout << j << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("03b");
    
    solve();
}
