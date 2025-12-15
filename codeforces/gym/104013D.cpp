#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, w, h, b;
    cin >> n >> w >> h >> b;
    char mc; int mcx = -1;
    while(n--) {
        char l; cin >> l; int x = -1; int mx = -1;
        for(int i = 0; i < h; i++) {
            char c, last; cin >> c;
            x = c == '#';
            for(int j = 1; j < w; j++) {
                last = c; cin >> c;
                x += (last == '.' && c == '#');
            }
            mx = max(mx, x);
        }

        if(mx > mcx) {
            mc = l;
            mcx = mx;
        }
    }

    string ans;
    int bx = (b+mcx*2-1)/(mcx*2);
    while(bx--) {
        ans += mc;
    }
    cout << ans << "\n";
}


signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
}


