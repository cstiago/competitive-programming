#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

char r = '@';

void solve() {
    string a, b, c, x, emp;
    cin >> x;
    a = emp; b = move(x); c = emp;

    ll ans = 0;
    bool next = true;
    while(next) {
        if(cin >> x) c = move(x);
        else {
            next = false;
            c = emp;
        }

        for(int s = 0; s < b.size(); s++) {
            if(b[s]==r) {
                int arr = 0;
                for(int i = -1; i <= 1; i++) {
                    if(0 <= s+i) {
                        if(s+i < a.size() && a[s+i]==r) arr++;
                        if(i!=0 && s+i < b.size() && b[s+i]==r) arr++;
                        if(s+i < c.size() && c[s+i]==r) arr++;
                    }
                }
                if(arr < 4) ans++;
            }
        }

        a = move(b); b = move(c);
    }

    cout << ans << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("4a");
    
    solve();
}
