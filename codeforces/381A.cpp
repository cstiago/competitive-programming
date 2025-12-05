#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const ll mod = 1e9+7;

void solve() {
    int n;
    cin >> n;

    deque<int> d;

    while(n--) {
        int i; cin >> i;
        d.push_back(i);
    }

    int a = 0, b = 0;
    bool isa = true;
    while(!d.empty()) {
        int x = max(d.front(), d.back());
        if(d.front() >= d.back()) d.pop_front();
        else d.pop_back();

        if(isa) a += x;
        else b += x;

        isa ^= 1;
    }

    cout << a << " " << b << "\n";
}

void io(const string& s = "") {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    if(s.size()) {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}

int main() {
    io("");
    
    solve();
}
