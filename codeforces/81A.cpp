#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    string s;
    cin >> s;

    stack<char> sc;

    each(c, s) {
        if(!sc.empty() && c == sc.top()) {
            sc.pop();
        }
        else {
            sc.push(c);
        }
    }
    
    string ans;
    while(!sc.empty()) {
        ans += sc.top();
        sc.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
