#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    if(a == b && b == c) {
        cout << '*' << endl;
        return 0;
    }

    int x = a^b^c;

    if(x == a)
        cout << 'A' << endl;
    else if(x == b)
        cout << 'B' << endl;
    else // x == c
        cout << 'C' << endl;

    return 0;
}
