#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool possible(vector<vector<int>> books, pair<int, int> ks, int n) {
    if(n == 1 || n >= 3) return true;
    
    if(n == 2) {
        reverse(books[1].begin(), books[1].end());
        books[0].insert(books[0].end(), books[1].begin(), books[1].end());
        
        if(books[0].size() == 1) return true;
        
        bool found2 = false;
        
        for(int i = 0; i < ks.first + ks.second; i++) {
            if(!found2 && books[0][i] == 2) found2 = true;
            if(found2 && books[0][i] == 1) {
                return false;
            }
        }
    }
    
    return true;
}

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> books(n);
    pair<int, int> ks;
    
    for(int i = 0; i < n; i++) {
        int k, l;
        cin >> k;
        
        if(i == 0) ks.first = k;
        else if(i == 1) ks.second = k;
        
        for(int j = 0; j < k; j++) {
            cin >> l;
            
            books[i].push_back(l);
        }
    }
    
    cout << (possible(books, ks, n) ? "S" : "N") << "\n";
    
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    // ll t; cin >> t; while(t--)
        solve();
        
    return 0;
}
