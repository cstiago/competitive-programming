#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, p, q;
    char c;
    cin >> n >> p >> c >> q;
    
    int r;

    switch(c) {
        case '+':
            r = p + q;
            break;
        case '*':
            r = p * q;
            break;
    }

    if(n >= r)
        cout << "OK\n";
    else
        cout << "OVERFLOW\n";

    return 0;
}
