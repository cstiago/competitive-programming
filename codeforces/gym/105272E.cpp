#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    
    vector<int> v;
    ll dig = 0;
    
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    
    int min = v[0];
    
    for(int i = 0; i < n; i++) {
        dig += v[i] - min;
    }
    
    cout << dig << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    solve();

    return 0;
}

