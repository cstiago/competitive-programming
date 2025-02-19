#include <bits/stdc++.h>
#define int long long
using namespace std;

int factors(int n) {
    if(n <= 1) {
        return 0;
    }

    int amount = 0;

    while(n % 2 == 0) {
        n /= 2;
        amount++;
    }
    
    for(int i = 3; i <= sqrt(n); i += 2) {
        while((n % i) == 0) {
            n /= i;
            amount++;
        }

        if(n == 1) {
            return amount;
        }
    }

    if(n > 1) {
        amount++;
    }

    return amount;
}

void test_case() {
    int x, k;
    cin >> x >> k;

    if(x <= k) {
        cout << 0 << endl;
        return;
    }

    int amount = factors(x);

    cout << (amount >= k) << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        test_case();
    }
    
    return 0;
}
