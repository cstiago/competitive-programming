#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    double x;

    cin >> n;

    while(n) {
        cin >> x;

        cout << fixed << setprecision(4) << sqrt(x) << endl;

        n--;
    }

    return 0;
}
