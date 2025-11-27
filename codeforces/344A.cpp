#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;
 
void solve() {
    int n;
    cin >> n;
 
    int m, lm, a = 1;
    cin >> lm; n--;
    
    while(n--) {
        cin >> m;
        if(m != lm) a++;
        lm = m;
    }
    
    cout << a << "\n";
}
 
void fastio() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
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
