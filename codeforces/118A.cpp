#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    string s;
    cin >> s;

    string ans;

    for (char c : s) {
        c = tolower(c);
        if(string("aeiouy").find(c)==string::npos) ans += '.', ans += c;
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
