#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a = 0;

    cin >> n;

    char g[81], c[81];
    
    for(int i = 0; i < n; i++) {
        cin >> g[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for(int i = 0; i < n; i++) {
        if(g[i] == c[i])
            a++;
    }

    cout << a << endl;

    return 0;
}
