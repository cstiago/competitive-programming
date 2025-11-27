#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int n;
    cin >> n;

    vector<int> s1(26, 0), s2(26, 0);

    loop(i, n) {
        char c;
        cin >> c;

        s1[c - 'a']++;
    }

    loop(i, n) {
        char c;
        cin >> c;

        s2[c - 'a']++;
    }

    bool equal = true;

    loop(i, 26) {
        if(s1[i] != s2[i]) {
            equal = false;
            break;
        }
    }

    cout << (equal ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int t; cin >> t; while(t--)
        solve();
}
