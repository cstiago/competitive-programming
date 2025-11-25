#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    multiset<int> m;

    for(int i = 0; i < n; i++) {
        int vi;
        cin >> vi;

        m.insert(vi);
    }

    for(int i = 0; i <= 100; i++) {
        if(m.find(i) == m.end()) {
            cout << i << '\n';
            break;
        }
    }

    return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  
  long long t; cin >> t; while(t--)
    solve();

  return 0;
}
