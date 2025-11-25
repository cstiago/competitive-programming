#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define loop(i_,n_) for(ll i_=0;i_<n_;i_++)
#define each(i_,v_) for(auto& i_:v_)

void solve() {
   int t;
   cin >> t;

   int c = 0;
   
   loop(i, t) {
       string s;
       cin >> s;

       if(s[1] == '+') c++;
       else c--;
   }

   cout << c << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    
    solve();
}

