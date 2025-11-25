#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int m = n;
    int c = 0, trailing0s = 0;
    bool trail = true;
    while(m > 0) {
        if(trail && !(m & 1)) {
          trailing0s++;
        }
        else {
          trail = false;
        }

        m/=2;
        c++;
    }

    int bits = trailing0s + c;

    bool pos = true;

    if((bits%2 == 1) && (n>>(bits/2)) & 1 == 1) {
        pos = false;
    }

    if(pos)
    for(int i = 0; i < c; i++) {
        if(((n>>i) & 1) != ((n>>(bits-i-1)) & 1)) {
            pos = false;
            break;
        }        
    }

    cout << (pos ? "YES" : "NO") << '\n';

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
  
    int t; cin >> t; while(t--)
        solve();

    return 0;
}
