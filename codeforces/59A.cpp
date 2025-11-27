#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    string s;
    cin >> s;

    int l = 0;

    for(auto c : s) {
        if(islower(c)) l++;
    }

    bool tol = l >= s.length() - l;

    if(tol) each(i, s) i = tolower(i);
    else each(i, s) i = toupper(i);

    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
