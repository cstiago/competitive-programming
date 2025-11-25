#include <bits/stdc++.h>
using namespace std;

int count(vector<int>& p){
    int n = p.size();
    vector<bool> vis(n+1, false);
    int ans = 0;
    for(int i=0; i<n; i++){
        if(vis[i]) continue;
        vis[i] = true;
        int nxt = p[i];
        while(!vis[nxt]){
            ans++;
            vis[nxt] = true;
            nxt = p[nxt];
        }
    }
    return ans;
}

signed main(){ ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto& ai : a){
        cin >> ai;
        ai--;
    }
    for(auto& bi : b){
        cin >> bi;
        bi--;
    }
    cout << count(a) + count(b) << '\n';
}

