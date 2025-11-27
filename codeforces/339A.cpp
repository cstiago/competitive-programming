#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
    vector<int> v;

    int a;
    while(cin >> a) {
        v.push_back(a);

        if(cin.peek() == '\n') break;
        cin.ignore();
    }

    sort(v.begin(), v.end());

    loop(i, v.size()) {
        cout << v[i] << (i < v.size()-1 ? "+" : "");
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}
