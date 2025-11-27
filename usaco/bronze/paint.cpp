#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool mid = 0;
    if(a < c && b < c || d < a && d < b) mid = 1;

    cout << (mid ? d-c+b-a : max(max(max(a,b),c),d) - min(min(min(a,b),c),d)) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
