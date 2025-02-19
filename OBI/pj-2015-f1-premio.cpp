#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a, d = 0, t = 0;

    cin >> n;

    while(n) {
        d++;
        
        cin >> a;

        t += a;

        if(t >= 1000000) {
            break;
        }

        n--;
    }

    cout << d << endl;

    return 0;
}
