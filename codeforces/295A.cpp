#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> cs;

    each(i, s) {
        cs.insert(tolower(i));
    }

    cout << (cs.size() == 26 ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}

