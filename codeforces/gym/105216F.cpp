#include<bits/stdc++.h>

using namespace std;

#define int long long 

void solve(){
    int n, p; cin >> n >> p;
    vector<int> v(n);
    int ans = 0;
    for(auto &e : v){
        cin >> e;
        if(e > ans and e <= p) ans = e;
    }
    cout << ans << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
