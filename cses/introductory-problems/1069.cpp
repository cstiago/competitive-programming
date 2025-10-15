#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void solve() {
    string sequence;
    cin >> sequence;
 
    ll length = sequence.size();
 
    char current = sequence[0];
    ll count = 1;
    ll largest = 1;
 
    for(int i = 1; i < length; i++) {
        if(sequence[i] == current) {
            count++;
 
            if(count > largest) {
                largest = count;
            }
        }
        else {
            count = 1;
            current = sequence[i];
        }
    }
 
    cout << largest << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // ll t; cin >> t; while(t--)
    solve();
 
    return 0;
}
