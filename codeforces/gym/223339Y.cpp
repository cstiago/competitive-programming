#include <bits/stdc++.h>
using namespace std;

int step(int start, int end) {
    if(start == end) return 1;
    if(start > end) return 0;
    
    int acc = 0;
    
    acc += step(start + 1, end);
    acc += step(start + 2, end);
    acc += step(start + 3, end);
    
    return acc;
}

void solve() {
    int s, e;
    cin >> s >> e;
    
    cout << step(s, e) << "\n";
    
    return;
}

void io() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}

int main() {
    io();
    
    //int t; cin >> t; while(t--)
        solve();
        
    return 0;
}
