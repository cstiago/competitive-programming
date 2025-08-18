#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll l, n;
    cin >> l >> n;

    if(l <= 0 || n <= 0) {
        cout << "0 0\n";
        return;
    }

    vector<ll> ants;

    for(int i = 0; i < n; i++) {
        int ant;
        cin >> ant;

        ants.push_back(ant);
    }

    sort(ants.begin(), ants.end());

    ll middle = l / 2;

    ll upper_middle_ant = *lower_bound(ants.begin(), ants.end(), middle);
    ll lower_middle_ant = *lower_bound(ants.rbegin(), ants.rend(), middle, greater<int>());
    
    ll earliest;

    if(abs(upper_middle_ant - middle) < abs(lower_middle_ant - middle)) {
        earliest = l - upper_middle_ant;
    }
    else {
        earliest = lower_middle_ant;
    }

    cout << earliest << ' ';

    ll lowest_ant = ants[0];
    ll highest_ant = ants[n - 1];

    ll latest;

    if(abs(l - highest_ant) < lowest_ant) {
        latest = highest_ant;
    }
    else {
        latest = l - lowest_ant;
    }

    cout << latest << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    ll t; cin >> t; while(t--)
        solve();

    return 0;
}