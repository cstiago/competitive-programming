#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << (!(i&1) || i%4==1 && j==m-1 || i%4==3 && j==0 ? "#" : "."); 
        }
        cout << "\n";
    }
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
