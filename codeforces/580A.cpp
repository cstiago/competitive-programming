#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using lll = __int128;

void solve() {
    int n;
    cin >> n;

    int last, m = 1, c = 1;
    cin >> last; n--;

    while(n--) {
        int i;
        cin >> i;

        if(last <= i) {
            m++;
        }
        else{
            m = 1;
        }

        last = i;
        c = max(c, m);
    }

    cout << c << "\n";
}

void io(const string& s = "") {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    if(!s.empty()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("");
    
    solve();
}
