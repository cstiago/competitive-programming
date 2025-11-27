#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool inside(int x, int y) {
    if(x < -200 || x > 200) {
        return false;
    }
    
    if(x >= -200 && x < -100) {
        if(y >= 0 && y <= (x + 200)) return true;
    }
    else if(x >= -100 && x < 0) {
        if(y >= (-x - 100) && y <= 100) return true;
    }
    else if(x >= 0 && x < 100) {
        if(y >= -100 && y <= (-x + 100)) return true;
    }
    else if(x >= 100 && x <= 200) {
        if(y >= (x - 200) && y <= 0) return true;
    }
    
    return false;
}

void solve() {
    int x, y;
    cin >> x >> y;
    
    cout << (inside(x, y) ? "S" : "N") << "\n";
    
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    ll t; cin >> t; while(t--)
        solve();
        
    return 0;
}
