#include <iostream>
#include <string>

using namespace std;

typedef long long int ll;

void solve() {
    string s;
    cin >> s;

    bool minimum = false;
    int l = s.length();

    for(int i = 0; i < l - 1; i++) {
        if(s[i] == s[i + 1]) {
            minimum = true;
            break;
        }
    }

    cout << (minimum ? 1 : l) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t; cin >> t; while(t--)
        solve();

    return 0;
}
