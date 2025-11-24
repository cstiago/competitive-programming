#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int a[4][2];

    loop(i, 4) {
        loop(j, 2) {
            cin >> a[i][j];
        }
    }

    int p = a[3][1]-a[3][0];
    a[2][1] += p;
    int g = a[2][1]-a[2][0];
    a[1][1] += g;
    int s = a[1][1]-a[1][0];

    cout << s << "\n" << g << "\n" << p << "\n";
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
    fileio("promote");
    
    solve();
}
