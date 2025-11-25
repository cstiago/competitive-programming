#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    string s;
    cin >> s;
    
    if(s.length() > 10) cout << s[0] << s.length() - 2 << s[s.length()-1] << "\n";
    else cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    
    int t; cin >> t; while(t--)
        solve();
}
