#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, b, l;
    cin >> n >> l;

    while(n-1) {
        cin >> b;

        if(b < l)
            l = b;

        n--;
    }

    cout << l << endl;

    return 0;
}
