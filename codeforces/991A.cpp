#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t) {
        int c = 0;

        int n, m;
        cin >> n >> m;

        string s;
        bool stop = false;

        for(int i = 0; i < n; i++) {
            cin >> s;

            if(s.size() <= m && !stop) {
                m -= s.size();
                c++;
            }
            else {
                stop = true;
            }
        }

        cout << c << endl;

        t--;
    }

    return 0;
}
