#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n, 0);

    for(int i = 0; i < n; i++) {
        int vi;
        cin >> vi;

        v[i] = vi;
    }

    pair<int, int> b = {-1, INT_MIN};
    pair<int, int> s = {-1, INT_MAX};

    for(int i = 0; i < n; i++) {
        if(v[i] > b.second) {
            b.first = i;
            b.second = v[i];
        }

        if(v[i] <= s.second) {
            s.first = i;
            s.second = v[i];
        }
    }

    long long d = 0;

    if(b.first > s.first) {
        d--;
    }

    d += b.first + (n-1) - s.first;

    cout << d << endl;

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
