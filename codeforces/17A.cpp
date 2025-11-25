#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    
    set<string> s;
    
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        
        if(s.contains(a)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
            s.emplace(a);
        }
    }
    
    return;
}

void io() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}

int main() {
    io();
    
    //ll t; cin >> t; while(t--)
        solve();
        
    return 0;
}

