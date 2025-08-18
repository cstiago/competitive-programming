#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;
typedef long long ll;

const int MAXO = 22+5;
const int MAXB = 7+5;

int ss[MAXO], ds[MAXO], vs[MAXO];
bool used[MAXO];
int traffic[MAXB];

int best_sol(int n, int o, int c) {
    if(n == o) {
        return 0;
    }
    
    int best = INT_MIN;

    bool possible = true;

    for(int i = ss[n]+1; i <= ds[n]; i++) {
        if(c < traffic[i] + vs[n]) {
            possible = false;
            break;
        }
    }

    if(possible) {
        for(int i = ss[n]+1; i <= ds[n]; i++) {
            traffic[i] += vs[n];
        }

        used[n] = true;
        int g = (ds[n] - ss[n]) * vs[n];
        best = g + best_sol(n+1, o, c);

        for(int i = ss[n]+1; i <= ds[n]; i++) {
            traffic[i] -= vs[n];
        }
    }
    
    used[n] = false;
    int best2 = best_sol(n+1, o, c);

    return max(best, best2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    while(true) {
        int n, b, o;
        cin >> n >> b >> o;

        if(!n && !b && !o) break;
        
        for(int i = 0; i < o; i++) {
            int s, d, v;
            cin >> s >> d >> v;
            
            ss[i] = s;
            ds[i] = d;
            vs[i] = v;
        }
        
        cout << best_sol(0, o, n) << "\n";
    }
    
    return 0;
}
