#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;

    vector<ll> v;

    for(ll i = 0; i < n; i++) {
        ll ni;
        cin >> ni;

        v.push_back(ni);
    }

    sort(v.rbegin(), v.rend());

    ll c = 0;

    for(ll i = 0; i < n; i+=2) {
        if(i+1 < n) {
            c += max(v[i], v[i+1]);
        }
        else {
            c += v[i];
        }
    }

    cout << c << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  
  ll t; cin >> t; while(t--)
    solve();

  return 0;
}
