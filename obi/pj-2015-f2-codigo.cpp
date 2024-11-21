#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, t = 0;
    int c[] = {1,0,0};
    bool m;

    cin >> n;

    int b[n];

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n-2; i++) {
        m = true;

        for(int j = 0; j < 3; j++) {
            if(b[i+j] != c[j]) {
                m = false;
                break;
            }
        }

        if(m)
            t++;
    }
    
    cout << t << endl;

    return 0;
}
