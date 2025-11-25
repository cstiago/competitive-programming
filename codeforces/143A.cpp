#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int t;
    cin >> t;

    int sol = 0;

    loop(i, t) {
        int si = 0;

        loop(j, 3) {
            int a;
            cin >> a;

            if(a) si++;
        }

        if(si >= 2) sol++;
    }

    cout << sol << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    solve();
}

