#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, l, c, t = 0;

    cin >> n;

    while(n) {
        cin >> l >> c;

        if(l > c)
            t += c;
 
        n--;
    }

    cout << t << endl;

    return 0;
}
