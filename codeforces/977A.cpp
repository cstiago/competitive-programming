#include<bits/stdc++.h>
using namespace std;

long long d(int n) {
    if(n % 10 == 0) {
        return n /= 10;
    }

    return --n;
}

void solve() {
    long long n;
    int k;
    cin >> n >> k;

    while(k--) {
        n = d(n);
    }

    cout << n << endl;

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
