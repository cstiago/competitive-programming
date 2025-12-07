#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    string s;
    vector<ll> v;
    ll x;
    while(getline(cin, s)) {
        for(int i = 0; i < s.size(); i++) {
            x = (isdigit(s[i]) ? s[i]-'0' : -1);

            if(v.size() <= i) {
                v.push_back(x);
            }
            else if(v[i] >= 0 && x >= 0) {
                v[i] *= 10;
                v[i] += x;
            }
            else if(v[i] == -1) v[i] = x;
        }

        if(cin.peek() == '*' || cin.peek() == '+') break;
    }

    bool mult = cin.peek() == '*';
    ll acc = mult, ans = 0;
    char c;

    getline(cin, s);
    for(int i = 0; i < v.size(); i++) {
        if(s[i] != ' ' && (s[i] == '*' != mult)) {
            mult ^= 1;
            acc = mult;
        }

        if(v[i] != -1) {
            if(mult) acc *= v[i];
            else acc += v[i];
        }
        else {
            ans += acc;
            acc = mult;
        }
    }
    ans += acc;

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
    io("6b");
    
    solve();
}
