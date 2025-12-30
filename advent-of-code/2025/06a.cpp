#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

vector<pair<ll, ll>> v;

void solve() {
    string s; stringstream ss;

    while(getline(cin, s)) {
        ss.clear(); ss.str(s);

        int i = 0, n;
        while(ss >> n) {
            if(i < v.size()) {
                v[i].first += n;
                v[i].second *= n;
            }
            else {
                v.push_back({n,n});
            }
            i++;
        }

        if(cin.peek() == '*' || cin.peek() == '+') break;
    }

    int i = 0;
    ll ans = 0;
    char c;
    while(cin >> c){
        if(c == '+') ans += v[i].first;
        else ans += v[i].second;
        i++;
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
    io("06a");
    
    solve();
}
