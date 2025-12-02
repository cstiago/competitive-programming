#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    string a;
    cin >> a;

    bool change = true;

    for(int i = 1; i < a.size(); i++) if(islower(a[i])) {change = false; break;}
    if(change) for(auto& i : a) i = (islower(i) ? toupper(i) : tolower(i));
    
    cout << a << "\n";
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
