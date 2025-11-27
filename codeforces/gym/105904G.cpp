#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    string s, state, c;
    cin >> s;
    
    state = s.substr(3, 5);
    
    if(!state.compare("SP")) {
        c = "S";
    }
    else if(!state.compare("?P") || !state.compare("S?")) {
        c = "T";
    }
    else {
        c= "N";
    }
    
    cout << c << "\n";
    
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    // ll t; cin >> t; while(t--)
        solve();
        
    return 0;
}
