#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

typedef struct {
    int i;
    int j;
} point;

void solve() {
    point b, r, l;

    char t;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> t;
            if(t == 'B') b.i = i, b.j = j;
            else if(t == 'R') r.i = i, r.j = j;
            else if(t == 'L') l.i = i, l.j = j;
        }
    }

    int path = abs(b.i-l.i)+abs(b.j-l.j)-1;

    if(b.i == l.i && b.i == r.i && r.j > min(b.j, l.j) && r.j < max(b.j, l.j) || b.j == l.j && r.j == b.j && r.i > min(b.i, l.i) && r.i < max(b.i, l.i)) path += 2;

    cout << path << "\n";
}

void fastio() {
    ios_base::sync_with_stdio(0); cin.tie(0);
}

void fileio(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    fastio();
    fileio("buckets");
    
    solve();
}
