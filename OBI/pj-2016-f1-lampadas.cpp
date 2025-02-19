#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, i, a = 0, b = 0;

    cin >> n;

    while(n) {

        cin >> i;

        a = !a; // both cases
        
        if(i - 1) { // press i2
            b = !b;
        }

        n--;
    }

    cout << a << endl;
    cout << b << endl;

    return 0;
}
