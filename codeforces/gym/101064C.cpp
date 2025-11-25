#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long h, w;
    cin >> h >> w;

    vector<long long> l, r, diff;

    for(int i = 0; i < h; i++) {
        long long vi;
        cin >> vi;

        l.emplace_back(vi);
    }

    for(int i = 0; i < h; i++) {
        long long vi;
        cin >> vi;

        r.emplace_back(vi);
    }

    for(int i = 0; i < h; i++) {
        diff.emplace_back(w - l[i] - r[i]);
    }

    long double a = *min_element(diff.begin(), diff.end());

    cout << a / 2 << endl;

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    // long long t;
    // cin >> t;
    
    // while(t--) {
        solve();
    // }

    return 0;
}
