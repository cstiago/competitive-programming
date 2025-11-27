#include <iostream>

using namespace std;

typedef long long ll;

void solve() {
    int w;
    cin >> w;
    
    cout << (w % 2 == 0 && w > 2 ? "YES" : "NO") << "\n";
    
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    solve();

    return 0;
}
