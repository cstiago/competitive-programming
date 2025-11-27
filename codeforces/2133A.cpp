#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++) {
        int ni;
        cin >> ni;

        v.push_back(ni);
    }

    set<int> s;
    bool pos = false;

    for(int i = 0; i < n; i++) {
        if(s.find(v[i]) != s.end()) {
            pos = true;
            break;
        }

        s.insert(v[i]);
    }

    cout << (pos ? "YES" : "NO") << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  
  ll t; cin >> t; while(t--)
    solve();

  return 0;
}
