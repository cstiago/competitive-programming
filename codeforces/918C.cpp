#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t, n;
	
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		long long a[n], s = 0;
	
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			s += a[i];
		}
		
		long long m = (long long) sqrt(s);
		
		if(m*m == s) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";	
		}
	}
	
	return 0;
}
