#include<bits/stdc++.h>

using namespace std;

#define int long long 


vector<int> adj[1123456];

int n;
map<int, int> ans;
int dfs(int at, int p){
    int child = 1;
    for(auto u : adj[at]){
        if(u == p) continue;
        child += dfs(u, at);
    }
    ans[(n-child)*child]++;
    return child;
}

void solve(){
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int u, v; cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0, -1);
    cout << (ans.rbegin())->first << ' ' << (ans.rbegin())->second << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
