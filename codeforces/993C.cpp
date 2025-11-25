#include <bits/stdc++.h>
using namespace std;

long long u, d;
long long q;

void seats(long long *monkeys, long long *available) {

    if(*monkeys >= *available) {
        q += *available;
        *monkeys -= *available;
        *available = 0;
    }
    else {
        q += *monkeys;
        *available -= *monkeys;
        *monkeys = 0;
    }

}
    
int main() {
    
    int t;
    cin >> t;
    
    while(t) {
    
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        u = m, d = m;
        q = 0;

        seats(&a, &u);
        seats(&b, &d);
        seats(&c, &u);
        seats(&c, &d);

        cout << q << endl;

        t--;
    }
    
    return 0;
}
