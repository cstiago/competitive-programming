#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> v) {
    int coord = 0;
    bool possible = true;
    
    for(int i = 0; i < v.size(); i++) {
        if(!v[i]) continue;
        
        if(!coord) {
            coord = (v[i] > 0) ? 1 : -1;
        }
        
        if((v[i] > 0) != (coord > 0)) {
            possible = false;
            break;
        }
    }
    
    return possible;
}

void solve() {
    int n; cin >> n;
    int x, y; x = y = 0;
    vector<int> vx, vy;
    
    for(int i = 0; i < n; i++) {
        int xi, yi;
        cin >> xi >> yi;
        
        vx.emplace_back(xi);
        vy.emplace_back(yi);
    }
    
    bool posx, posy;
    
    posx = check(vx);
    posy = check(vy);
    
    cout << ((posx || posy) ? "YES" : "NO") << "\n";
    
    return;
}

void io() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}

int main() {
    io();
    
    int t; cin >> t;
    while(t--)
        solve();
        
    return 0;
}

