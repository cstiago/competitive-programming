#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b;
    
    cin >> a >> b;

    double avg = (a + b) / 2;

    if(avg >= 7) {
        cout << "Aprovado" << endl;
    }
    else if(avg < 7 && avg >= 4) {
        cout << "Recuperacao" << endl;
    }
    else { // avg < 4
        cout << "Reprovado" << endl;
    }

    return 0;
}
