#include <iostream>
#include <string>
 
using namespace std;
typedef long long ll;
 
const int MAXN = 8;
const int MAXD = 2 * MAXN - 1;
 
string tab[MAXN];
int qs[MAXN];
bool col[MAXN];
bool diag1[MAXD];
bool diag2[MAXD];
 
int c = 0;
 
void gen_sols(int ind) {
    if(ind == MAXN) {
        c++;
        return;
    }
    
    for(int i = 0; i < MAXN; i++) {
        int d1 = i - ind + 7;
        int d2 = i + ind;
        
        if(!col[i] && !diag1[d1] && !diag2[d2] && tab[i][ind] != '*') {
            qs[ind] = i;
            
            col[i] = true;
            diag1[d1] = true;
            diag2[d2] = true;
            
            gen_sols(ind+1);
            
            col[i] = false;
            diag1[d1] = false;
            diag2[d2] = false;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    for(int i = 0; i < MAXN; i++) {
        string s;
        cin >> s;
        
        tab[i] = s;
    }
    
    gen_sols(0);
    
    cout << c << "\n";
    
    return 0;
}
