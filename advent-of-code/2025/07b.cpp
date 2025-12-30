#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    string s;
    getline(cin, s);

    unordered_map<ll, ll> beams, nb;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'S') {
            beams[i]++;
            break;
        }
    }

    while(getline(cin, s)) {
        for(auto [b, i] : beams) {
            if(b > 0 && b < s.size() && s[b] == '^') {
                nb[b-1] += i;
                nb[b+1] += i;
            }
            else {
                nb[b] += i;
            }
        }
        beams = move(nb);
        nb.clear();
    }

    ll t = 0;
    for(auto [b, i] : beams) t += i;
    
    cout << t << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("07b");
    
    solve();
}
