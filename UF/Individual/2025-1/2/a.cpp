#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int price;
    vector<int> prices;

    for(int i = 0; i < n; i++) {
        cin >> price;

        prices.push_back(price);
    }

    int days = 1;
    vector<int>::iterator smaller;

    for(int i = 1; i < n; i++) {
        int offset = 5;

        if(i < 5) {
            offset = i;
        }

        smaller = min_element(prices.begin() + i - offset, prices.begin() + i);

        if(prices[i] < *smaller) {
            days++;
        }
    }

    cout << days << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long t; cin >> t; while(t--)
        solve();

  return 0;
}