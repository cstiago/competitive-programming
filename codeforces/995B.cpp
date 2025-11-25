#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void calc(ll *days, ll *r, ll l) {
    if(*r >= l) {
        *r -= l;
        (*days)++;
    }
}

void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    
    ll days = (n / (a + b + c)) * 3;
    ll r = n % (a + b + c);
    
    if(r > 0) {
        if(r <= a) {
            days++;
        }
        else if(r <= a + b) {
            days += 2;
        }
        else {
            days += 3;
        }
    }
    
    cout << days << "\n";
    
    return;
}

void io() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}

int main() {
    io();
    
    ll t; cin >> t; while(t--)
        solve();
        
    return 0;
}

