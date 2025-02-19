#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    int v[n][m], t[n], c, l = INT_MAX;

    for(int i = 0; i < n; i++) {
        t[i] = 0;

        for(int j = 0; j < m; j++){
            cin >> v[i][j];

            t[i] += v[i][j];
        }

        if(t[i] < l) {
            l = t[i];
            c = i;
        }
    }

    cout << c + 1 << endl;

    return 0;
}
