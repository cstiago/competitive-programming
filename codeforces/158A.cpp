#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v;
    
    loop(i, n) {
        int vi;
        cin >> vi;

        if(vi != 0) v.push_back(vi);
    }

    if(v.size() >= k) k = v[k-1];
    else if(v.size() != 0) k = v[v.size()-1];
    else k = 0;

    auto a = lower_bound(v.rbegin(), v.rend(), k);
    int p = 0;

    if(a != v.rend()) {
        p = v.size() - distance(v.rbegin(), a);
    }

    cout << p << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}

