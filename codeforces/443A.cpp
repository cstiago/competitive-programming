#include<bits/stdc++.h>
using namespace std;

void solve() {
    set<char> c;

    string s;
    cin >> s;

    int n;

    if (s.compare("{}") == 0) {
        n = 0;
    }
    else if (s[0] == '{' && s[2] == '}' && s.length() == 3) {
        n = 1;
    }
    else {
        c.insert(s[1]);

        while(s[1] != '}') {
            cin >> s;

            c.insert(s[0]);
        }

        n = c.size();
    }

    cout << n << endl;

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    // long long t;
    // cin >> t;
    
    // while(t--) {
        solve();
    // }

    return 0;
}
