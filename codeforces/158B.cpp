#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int v[4];

void solve() {
    int n;
    cin >> n;

    int c = 0, i;
    while(n--) {
        cin >> i;
        if(i == 4) c++;
        else v[i]++;
    }
    
    int x = min(v[3], v[1]);
    c += x; v[3] -= x; v[1] -= x;
    c += v[3];

    x = v[2]/2;
    c += x; v[2] -= x * 2;

    if(v[2]) c++, v[1] -= min(2, v[1]);
    
    x = v[1] / 4;
    c += x; v[1] -= x * 4;

    if(v[1]) c++;

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
    io();
    
    solve();
}
