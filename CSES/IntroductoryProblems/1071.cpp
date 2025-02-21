#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll;
 
void solve() {
    ll y, x;
    cin >> y >> x;

    ll arm = max(y, x);
    ll diagonal = (arm * arm) - arm + 1;
    ll lower = ((arm - 1) * (arm - 1)) + 1;
    ll upper = arm * arm;

    ll num = 0;
    bool odd = (arm % 2 == 1);

    if(odd) {
        if(y > x) { // horizontal
            num = lower + x - 1;
        }
        else if(y < x) { // vertical
            num = upper - y + 1;
        }
        else { // y == x, diagonal
            num = diagonal;
        }
    }
    else { // even
        if(y > x) { // horizontal
            num = upper - x + 1;
        }
        else if(y < x) { // vertical
            num = lower + y - 1;
        }
        else { // y == x, diagonal
            num = diagonal;
        }
    }

    cout << num << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll t; cin >> t; while(t--)  
    solve();
 
    return 0;
}
