#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n, t; cin >> n >> t;

    if(t == 1) {
        cout << n << '\n';
        return;
    }

    int a = t-1;
    int count = 0;

    bool prime = true;

    for(int i = 1; i*i <= a; i++) {
        if(a % i == 0 ) {
            if(i <= n) {
                count++;
            }
            if(a / i <= n && i != a / i) {
                count++;
            }
        }
    }

    cout << count << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int q; cin >> q; while(q--)
    solve();
    return 0;
}
