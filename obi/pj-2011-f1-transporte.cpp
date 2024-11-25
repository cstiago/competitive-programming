#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c, x, y, z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;

    int m, n, o;
    
    m = x / a;
    n = y / b;
    o = z / c;

    cout << m * n * o << endl;

    return 0;
}
