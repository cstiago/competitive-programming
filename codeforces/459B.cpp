#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int nn, cn;
    cin >> nn >> cn;

    map<string, string> m;

    loop(i, nn) {
        string s1, s2;
        cin >> s1 >> s2;

        m.insert({s2, s1});
    }

    loop(i, cn) {
        string s1, s2;
        cin >> s1 >> s2;

        s2.erase(prev(s2.end()));
        cout << s1 << " " << s2 << "; #" << m[s2] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}

