#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    deque<int> v;

    for(int i = 0; i < n; i++) {
        int vi;
        cin >> vi;

        v.emplace_back(vi);
    }

    int x = 1;
    bool pos = true;

    while(v.size() > 1) {
        if(v.front() == x || v.back() == x) {
            if(v.front() == x) {
                v.pop_front();
            }

            if(v.back() == x) {
                v.pop_back();
            }
        }
        else {
            pos = false;
            break;
        }

        x++;
    }

    cout << (pos ? "YES" : "NO") << endl;

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
