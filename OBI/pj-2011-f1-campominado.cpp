#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, c[50];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> c[i];

    for(int b, i = 0; i < n; i++) {
        b = 0;

        if(i >= 1 && c[i-1])
            b++;
        if(c[i])
            b++;
        if(i < n-1 && c[i+1])
            b++;

        cout << b << endl;
    }

    return 0;
}
