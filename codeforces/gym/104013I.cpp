#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int s;
    cin >> s;
    int a, b;
    bool found = false;

    for(a = 1; a*a <= s; a++) {
        int b2 = s - a*a;
        int sqs = sqrt(b2);
        if(sqs*sqs == b2) {
            b = sqs;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Impossible\n";
        return;
    }

    cout << "0 0\n";
    cout << a << " " << b << "\n";
    cout << -b+a << " " << a+b << "\n";
    cout << -b << " " << a << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    solve();
}


