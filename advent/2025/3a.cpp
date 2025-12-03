#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    string l;
    ll j = 0;

    while(cin >> l) {
        auto m = max_element(begin(l), end(l)-1);
        auto n = max_element(begin(l)+distance(begin(l),m)+1, end(l));
        j += ((*m)-'0')*10 + (*n)-'0';
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
    io("3a");
    
    solve();
}
