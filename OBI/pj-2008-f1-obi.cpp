#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, x, y, t = 0;
    cin >> n >> p;

    while(n) {
        cin >> x >> y;

        if(x + y >= p)
            t++;

        n--;
    }

    cout << t << endl;

    return 0;
}
