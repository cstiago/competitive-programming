#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    cin >> n;

    vector<vector<int>> v(n+1);
    string s;

    for(int i = 1; i <= n; i++) {
        s.append(to_string(i)+(i < n ? " " : ""));
    }

    int maxlen = -1;
    int maxi = -1;
    
    for(int i = 1; i <= n; i++) {
        cout << "? " << i << " " << n << " " << s << endl;

        int len;
        cin >> len;
        if(len == -1) return -1;

        if(len > maxlen) {
            maxlen = len;
            maxi = i;
        }

        v[len].push_back(i);
    }

    vector<int> ans = {maxi};

    for(int i = maxlen-1; i >= 1; i--) {
        if(v[i].size() == 1) {
            ans.push_back(v[i][0]);
        }
        else {
            for(int j = 0; j < v[i].size(); j++) {
                cout << "? " << ans.back() << " 2 " << ans.back() << " " << v[i][j] << endl;

                int newlen;
                cin >> newlen;
                if(newlen == -1) return -1;

                bool related = newlen-1;
                
                if(related) {
                    ans.push_back(v[i][j]);
                }
            }
        }
    }

    cout << "! " << ans.size() << " ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i < ans.size()-1 ? " " : "");
    }
    cout << endl;

    return 0;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  
  int t; cin >> t; while(t--) {
    if(solve() == -1) return 0;
  }

  return 0;
}
