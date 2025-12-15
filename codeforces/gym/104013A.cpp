#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    string s;
    set<int> sb{-4, -3, 0,7,8,13,18};
    if(sb.count(n-2000))
        s = "SPbSU";
    else if(n == 2006) 
        s = "PetrSU, ITMO";
    else s = "ITMO";

    cout << s << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    solve();
}


