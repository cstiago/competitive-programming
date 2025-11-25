#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> b;

    for(int i = 0; i < n; i++) {
        long long bi;
        cin >> bi;

        b.emplace_back(bi);
    }

    vector<long long> a(n, 1);

    cout << a[0];

    int reg = 1;

    for(int i = 1; i < n; i++) {
        long long changed = b[i]-b[i-1];
        long long same = i - changed;

        if(same < 0) {
            a[i] = ++reg;
        }
        else {
            a[i] = a[same];
        }

        cout << " " << a[i];
    }

    cout << '\n';

    return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  
  long long t; cin >> t; while(t--)
    solve();

  return 0;
}
