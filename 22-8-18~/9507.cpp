#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int t;
ll fac[68];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> t;
	fac[0]=1;
	fac[1]=1;
	fac[2]=2;
	fac[3]=4;
	for(int i=4;i<=67;i++){
		fac[i]=fac[i-1]+fac[i-2]+fac[i-3]+fac[i-4];
	}
	while(t--){
		int n;
		cin >> n;
		cout << fac[n]<<"\n";
	}
	
	
}
