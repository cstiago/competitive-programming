#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	char s[3][3];
	
	cin >> t;
	
	while(t--) {
		int a = 0, b = 0, c = 0;
		
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				cin >> s[i][j];
				
				if(s[i][j] == 'A') {
					a++;
				}
				else if(s[i][j] == 'B') {
					b++;
				}
				else if(s[i][j] == 'C') {
					c++;
				}
			}
			
			if(a == 0) {
				cout << "A\n";
			}
			else if(b == 0) {
				cout << "B\n";
			}
			else if(c == 0){
				cout << "C\n";
			}
			
			a = b = c = 0;
		}
	}
	
	return 0;
}
