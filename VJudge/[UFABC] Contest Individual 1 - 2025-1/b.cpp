#include <bits/stdc++.h>
#define int long long
using namespace std;

void test_case() {
    int n;
    cin >> n;

    int a[n], sum = 0;
    bool remove = false;

    for(int i = 0; i < n; i++) {
        cin >> a[i];

        sum += a[i];

        if(!remove && (a[i] % 3) == 1) {
            remove = true;
        }
    }

    int remainder = sum % 3;

    switch(remainder) {
        case 0:
            // sum already divisible by 3
            cout << 0 << endl;
            break;
        case 1:
            if(remove) {
                // remove element of remainder 1
                cout << 1 << endl;
            }
            else {
                // sum 2 times to any element
                cout << 2 << endl;
            }
            break;
        case 2:
            // sum 1 to any element
            cout << 1 << endl;
            break;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        test_case();

    return 0;
}
