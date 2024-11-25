#include <bits/stdc++.h>
using namespace std;

int main() {

    int cv, ce, cs, fv, fe, fs;
    cin >> cv >> ce >> cs;
    cin >> fv >> fe >> fs;

    int cp, fp;

    cp = (cv * 3) + ce;
    fp = (fv * 3) + fe;

    if(cp > fp || (cp == fp && cs > fs))
        cout << 'C' << endl;
    else if(cp < fp || (cp == fp && cs < fs))
        cout << 'F' << endl;
    else // cp == fp && cs == fs
        cout << '=' << endl;

    return 0;
}
