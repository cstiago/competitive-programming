#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int n;
    cin >> n;

    set<pair<string, string>> sp;

    loop(i, n) {
        string s1, s2;
        cin >> s1 >> s2;

        sp.insert({s1, s2});
    }

    cout << sp.size() << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}

