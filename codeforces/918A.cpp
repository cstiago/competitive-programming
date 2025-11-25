#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int a, b, c, t;
	
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		cin >> a >> b >> c;
		
		if(a == b) {
			cout << c << "\n";
		}
		else if(a == c) {
			cout << b << "\n";
		}
		else {
			cout << a << "\n";
		}
	}
	
	return 0;
}
