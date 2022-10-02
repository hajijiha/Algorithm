#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	
	ll n,k;
	cin >> n >> k;
	ll sum=0;
	while(1){
		ll cnt =0;
		ll re=n;
		while(re>0){
			if(re%2==1){
				cnt+=1;
			}
			re/=2;
		}
		if(cnt<=k){
			break;
		}
		n+=1;
		sum+=1;
	}
	cout << sum;

	
}
