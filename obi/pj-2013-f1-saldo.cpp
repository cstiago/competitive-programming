#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, s;
    cin >> n >> s;

    int l = INT_MAX;

    while(n) {
        int i;
        cin >> i;
        
        s += i;

        if(s < l)
            l = s;

        n--;
    }

    cout << l << endl;

    return 0;
}
