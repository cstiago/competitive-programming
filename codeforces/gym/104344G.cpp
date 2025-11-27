#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, c;
    cin >> n >> c;
    vector<ll> p(n);
    
    ll eggs = 0;

    for(int i = 0; i < n; i++) {
        ll pi;
        cin >> pi;

        p[i] = pi;
    }

    sort(p.begin(), p.end());

    for(int i = 0; i < n; i++) {
        c -= p[i];

        if(c >= 0) {
            eggs++;
        }
    }

    cout << eggs << "\n";

    return;
}

void io() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
}

int main() {
    io();
    solve();
    
    return 0;
}
