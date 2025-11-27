#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef long double ld;

ld pi = acos(-1);
ld l, r;
ld eps = 1e-9;

ld f(ld x){
    ld D = pi*l/3.0, A = 3.0*r*r, B = 3.0*r*l, C = l*l;
    return D * sqrt(1.0 - x*x) * (A + B*x + C*x*x);
}

void solve(){
    cin >> l >> r;
    ld low = 0, high = 1;
    int cnt = 0;
    while((high - low) > eps and cnt < 1000){
        cnt++;
        ld m1 = low + (high-low)/3, m2 = high - (high-low)/3;

        if(f(m1) < f(m2)){
            low = m1;
        }
        else high = m2;
    }

    ld alpha = low;
    cout << fixed << setprecision(10);
    cout << pi - acos(alpha) << '\n';
}

signed main(){ ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}
