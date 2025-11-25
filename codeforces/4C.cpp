#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

map<string, int> m;

void solve() {
    string s;
    cin >> s;

    if(m.find(s) == m.end()) {
        m.insert({s, 1});
        cout << "OK\n";
    }
    else {
        cout << s << m[s] << "\n";
        m[s]++;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int t; cin >> t; while(t--)
    solve();
}

