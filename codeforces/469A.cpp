#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    int n;
    cin >> n;

    int pn, qn;
    set<int> s;

    cin >> pn;
    loop(i, pn) {
        int pi;
        cin >> pi;
        s.insert(pi);
    }

    cin >> qn;
    loop(i, qn) {
        int qi;
        cin >> qi;
        s.insert(qi);
    }

    cout << (s.size() == n ? "I become the guy.\n" : "Oh, my keyboard!\n");
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
