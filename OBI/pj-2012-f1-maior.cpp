#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 0, g = 0;

    do {
        cin >> n;

        if(n > g)
            g = n;
    }while(n);

    cout << g << endl;

    return 0;
}
