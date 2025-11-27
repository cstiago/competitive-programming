#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t, n;
	
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		string s, u;
		
		cin >> s;
		
		u = s;
		
		for(int i = 0; i < n; i++) {
			if(s[i] == 'a' || s[i] == 'e') {
				u[i] = 'v';
			}
			else {
				u[i] = 'c';
			}
		}
		
		for(int i = 0; i < n;) {
			if(i+3 >= n) {
				while(i < n) {
					cout << s[i];
					i++;
				}
				
				break;
			}
			
			cout << s[i] << s[i+1];
			
			if(u[i+3] == 'c') {
				cout << s[i+2];
				i += 3;
			}
			else {
				i += 2;
			}
			
			cout << ".";
		}
		
		cout << "\n";
	}
	
	return 0;
}
