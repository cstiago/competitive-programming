#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    
    queue<pair<int, int>> q;
    
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        
        q.push({l, r});
    }
    
    int t = 1;
    auto f = q.front();
    if(t <= f.first) {
        t = f.first;
    }
    bool leave = false;
    
    while(!q.empty()) {
        while(t <= f.second) {
            cout << t << " ";
            t++;
            q.pop();
            
            if(q.empty()){
                leave = true;
                break;
            }
            
            f = q.front();
            if(t <= f.first) {
                t = f.first;
            }
        }
        
        if(leave) break;
        
        while(t > f.second) {
            cout << 0 << " ";
            q.pop();
            
            if(q.empty()){
                leave = true;
                break;
            }
            
            f = q.front();
            if(t <= f.first) {
                t = f.first;
            }
        }
        
        if(leave) break;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int t; cin >> t; while(t--)
    solve();
    
    return 0;
}
