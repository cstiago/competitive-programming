#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

bool invalid(string& s, ll z) {
    string si = s.substr(0,z);

    for(ll i = z; i+z <= s.size(); i+=z) {
        if(si != s.substr(i,z)) {
            return false;
        }
    }

    return true;
}

void solve() {
    ll from, to, cnt = 0;
    char c;
    while(cin >> from >> c >> to) {
        for(ll i = from; i <= to; i++) {
            string s = to_string(i);
            for(ll j = 1; j <= to_string(i).size()/2; j++) {
                if(s.size()%j==0 && invalid(s, j)) {
                    cnt += i;
                    break;
                }
            }
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
    io("02b");
    
    solve();
}
