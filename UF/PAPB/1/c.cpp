#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

const int MAXN = 3*3;

int sud[MAXN][MAXN];

unsigned int imask[MAXN];
unsigned int lines[MAXN];
unsigned int cols[MAXN];
unsigned int boxes[MAXN];

bool found = false;

int map_box(int a, int i, int j) {
    int ti = i / a;
    int tj = j / a;
    
    return ti * a + tj;
}

void find_sol(int a, int n) {
    if(found) return;
    
    int l = a * a;
    
    if(n >= l * l) {
        found = true;
        return;
    }
    
    int lin = n / l;
    int col = n % l;
    
    if(!(imask[lin] & 1 << col)) {
        for(int i = 1; i <= l; i++) {
            unsigned int mask = lines[lin] | cols[col] | boxes[map_box(a, lin, col)];
        
            if(!(mask & 1 << i)) {
                sud[lin][col] = i;
            
                lines[lin] |= 1 << i;
                cols[col] |= 1 << i;
                boxes[map_box(a, lin, col)] |= 1 << i;
                
                find_sol(a, n+1);
                
                if(found) return;
            
                lines[lin] &= ~(1 << i);
                cols[col] &= ~(1 << i);
                boxes[map_box(a, lin, col)] &= ~(1 << i);
            }
        }
    }
    else {
        find_sol(a, n+1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    bool first = true;
    
    int n;
    while(cin >> n) {
        for(int i = 0; i < n*n; i++) {
            for(int j = 0; j < n*n; j++) {
                int num;
                cin >> num;
                
                sud[i][j] = num;
                
                imask[i] |= (num != 0) << j;
                lines[i] |= 1 << num;
                cols[j] |= 1 << num;
                boxes[map_box(n, i, j)] |= 1 << num;
            }
        }
        
        find_sol(n, 0);
        
        if(!first) cout << "\n";
        
        if(found) {
            for(int i = 0; i < n*n; i++) {
                for(int j = 0; j < n*n; j++) {
                    cout << sud[i][j] << " \n"[j == n*n-1];
                }
            }
        }
        else {
            cout << "NO SOLUTION\n";
        }
        
        found = false;
        first = false;
        memset(imask, 0, sizeof(imask));
        memset(lines, 0, sizeof(lines));
        memset(cols, 0, sizeof(cols));
        memset(boxes, 0, sizeof(boxes));
    }
    
    return 0;
}
