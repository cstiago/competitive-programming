#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << min(min(abs(a-c), abs(a-d))+min(abs(b-c), abs(b-d)), abs(a-b)) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
