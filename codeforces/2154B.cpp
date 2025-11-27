#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
    
#define loop(i_,n_) for(int i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)
#define endl '\n'
    
void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    loop(i, n) cin >> v[i];

    vector<int> g(n, 0);
    loop(i, n) g[i] = max(v[i], g[max(0, i-1)]);

    int c = 0;

    for(int i = 1; i < n; i+=2) {
        v[i] = g[i];
    }

    for(int i = 2; i < n-1; i+=2) {
        c += max(0, max(v[i]-v[i-1]+1, v[i]-v[i+1]+1));
    }

    c += max(0, v[0]-v[1]+1);
    
    if(n%2==1) c += max(0, v[n-1]-v[n-2]+1);

    cout << c << endl;
}
    
int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){solve();}
}
