#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

int v[3];

void solve() {
    int n;
    cin >> n;

    int a;
    while(n--) {
        loop(i, 3) {
            cin >> a;
            v[i]+=a;
        }
    }

    cout << (v[0] || v[1] || v[2] ? "NO" : "YES") << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
