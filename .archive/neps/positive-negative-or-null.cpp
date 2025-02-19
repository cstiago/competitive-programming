#include <bits/stdc++.h>

using namespace std;

int main() {

    int x;

    cin >> x;

    if(x < 0) {
        cout << "negativo" << endl;
    }
    else if(!x) {
        cout << "nulo" << endl;
    }
    else { // x > 0
        cout << "positivo" << endl;
    }

    return 0;
}




