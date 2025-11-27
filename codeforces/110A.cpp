#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    ll n;
    cin >> n;
    int l = 0;
    while(n) {
        if(n%10 == 4 || n%10 == 7) l++;
        n/=10;
        if(l > 7) break;
    }
    cout << (l == 4 || l == 7 ? "YES" : "NO") << "\n"; 
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
