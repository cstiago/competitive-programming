#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

bool invalid(ll n) {
    ll d = floor(log10(n))+1;
    ll x = (ll)pow(10,d/2);

    if((d&1)==0 && n%x == (n-(n%x))/x) return true;
    return false;
}

void solve() {
    ll from, to, cnt = 0;
    char c;
    while(cin >> from >> c >> to) {
        for(ll i = from; i <= to; i++) {
            if(invalid(i)) cnt += i;
        }

        cin >> c;
    }

    cout << cnt << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("02a");
    
    solve();
}
