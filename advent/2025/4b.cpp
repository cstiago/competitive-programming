#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

char r = '@';

void solve() {
    vector<string> v;
    string x;

    ll ans = 0;
    while(cin >> x) {
        v.push_back(x);
    }

    int t;
    do {
        t = 0;
        for(int i = 0; i < v.size(); i++) {
            for(int j = 0; j < v[i].size(); j++) {
                if(v[i][j]==r) {
                    int arr = 0;
                    for(int a = -1; a <= 1; a++) {
                        for(int b = -1; b <= 1; b++) {
                            if(0 <= i+a && i+a < v.size() && 0 <= j+b && j+b < v[i].size() && (a || b) && v[i+a][j+b]==r) arr++;
                        }
                        
                    }
                    if(arr < 4) {
                        v[i][j] = 'x';
                        t++;
                    }
                }
            }
            
        }

        ans += t;

    } while(t > 0);

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
    io("4b");
    
    solve();
}
