#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    int c = 0;
    loop(i, n) {
        cin >> v[i];
        if(i > 0 && i < n-1 && v[i] == -1) v[i] = 0;
    }

    if(v[0] == -1 && v[n-1] == -1) v[0] = 0, v[n-1] = 0;
    else if(v[0] == -1) v[0] = v[n-1];
    else if(v[n-1] == -1) v[n-1] = v[0];

    cout << abs(v[n-1]-v[0]) << "\n";
    each(i, v) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int t; cin >> t; while(t--)
    solve();
}

