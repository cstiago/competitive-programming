#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

void solve() {
    int n;
    cin >> n;

    int m;
    set<int> s;
    while(n++) {
        m = n;
        while(m){
            s.insert(m%10);
            m/=10;
        }
        if(s.size()==4) {
            cout << n << "\n";
            break;
        }
        s.clear();
    }
}

void fastio() {
    ios_base::sync_with_stdio(0); cin.tie(0);
}

void fileio(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    fastio();
    // fileio("");
    
    solve();
}
