#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(int i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int n;
    cin >> n;

    int ans = 0;
    if(n%2) {
        cout << ans << "\n";
        return;
    }

    n/=2;

    loop(i, n+1) {
        if((n-i)%2==0) ans++;
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int t; cin >> t; while(t--)
    solve();
}

