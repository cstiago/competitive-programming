#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
    
#define loop(i_,n_) for(int i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)
#define endl '\n'
    
void solve() {
    int n, k;
    cin >> n >> k;
    k--;

    string s;
    cin >> s;

    int prev1 = 0;
    int r = 0;

    loop(i, n) {
        if(s[i] == '1' && prev1 == 0) {
            r++;
        }

        if(s[i] == '1') prev1++;
        if(i >= k && s[i-k] == '1') prev1--;
    }

    cout << r << endl;
}
    
int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){solve();}
}
