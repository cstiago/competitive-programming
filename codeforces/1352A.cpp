#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using str = string;

const ll mod = 1e9+7;

void solve() {
    int n;
    cin >> n;

    vector<int> v;

    int a = 1;
    while(n) {
        if(n % 10) v.push_back((n % 10) * a);
        n /= 10;
        a *= 10;
    }

    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++) cout << v[i] << " \n"[i==v.size()-1];
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
    
    int t; cin >> t; while(t--)
    solve();
}
