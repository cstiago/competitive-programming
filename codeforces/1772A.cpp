#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int a = s[0]-'0';
    int b = s[2]-'0';

    cout << a+b << endl;

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
