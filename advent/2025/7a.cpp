#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    string s;
    getline(cin, s);

    unordered_set<int> beams, nb;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'S') {
            beams.insert(i);
            break;
        }
    }

    int t = 0;
    while(getline(cin, s)) {
        for(int b : beams) {
            if(b > 0 && b < s.size() && s[b] == '^') {
                nb.insert(b-1);
                nb.insert(b+1);
                t++;
            }
            else {
                nb.insert(b);
            }
        }
        beams = move(nb);
        nb.clear();
    }
    
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
    io("7a");
    
    solve();
}
