#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)
#define endl '\n'

vector<pair<int,int>> ans;

void swapn(set<int>& a, set<int>& b) {
    vector<pair<int,int>> tswap;
    auto ia = a.begin();
    auto ib = b.rbegin();
    while(ia != a.end() && ib != b.rend() && *ia < *ib) {
        auto an = ia++; auto bn = ib++;
        tswap.push_back({*an,*bn});
        ans.push_back({*an+1,*bn+1});
    }
    each(x,tswap) {
        a.insert(x.second);
        b.insert(x.first);
        a.erase(x.first);
        b.erase(x.second);
    }
}

void solve() {
    int n; cin >> n;
    set<int> i0,i1,i2;
    
    loop(i,n) {
        int vi; cin >> vi;
        switch(vi) {
            case 0: i0.insert(i); break;
            case 1: i1.insert(i); break;
            case 2: i2.insert(i); break;
        }
    }
    for(int i = 0; i < min(i0.size(), i2.size())/i1.size()+2; i++) {
        swapn(i1,i0);
        swapn(i2,i1);
    }
    
    cout << ans.size() << endl;
    loop(i,ans.size()) {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
    ans.clear();
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){solve();}
}
