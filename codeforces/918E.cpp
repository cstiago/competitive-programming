#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0); 
	
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector<ll> acp(n + 1), aci(n + 1);
		for(ll i = 1, vl; i <= n; i++){
			cin >> vl;
			if(i % 2)
				aci[i] += vl;
			else
				acp[i] += vl;
			aci[i] += aci[i - 1];
			acp[i] += acp[i - 1];
		}
		set<ll> dif;
		bool foi = 0;
		for(ll i = 0; i <= n; i++){
			if(dif.count(acp[i] - aci[i]))
				foi = 1;
			dif.insert(acp[i] - aci[i]);
		}
		if(foi)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
