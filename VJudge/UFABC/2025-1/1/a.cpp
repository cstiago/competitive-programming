#include <bits/stdc++.h>
#define int long long
using namespace std;

void solution() {
    int n, w, d, r;
    int coins, max, basket;

    while(cin >> n >> w >> d >> r) {
        coins = n * (n - 1) / 2;

        max = coins * w;

        basket = (max - r) / d;

        if (!basket) {
            basket = n;
        }

        cout << basket << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    solution();

    return 0;
}
