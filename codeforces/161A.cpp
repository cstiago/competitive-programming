#include <iostream>

using namespace std;

void solve() {
    int x, y;
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int n;
            cin >> n;
            
            if(n) {
                x = i;
                y = j;
                
                break;
            }
        }
    }
    
    cout << abs(x - 2) + abs(y - 2) << "\n";
    
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    solve();

    return 0;
}
