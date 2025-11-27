#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    each(i, s1) i = tolower(i);
    each(i, s2) i = tolower(i);

    int r = 0;

    if(s1 > s2) r = 1;
    else if(s1 < s2) r = -1;
    
    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
