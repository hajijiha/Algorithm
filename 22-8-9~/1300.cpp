#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	ll k;
	cin >> k;
	ll r=n*n;
	ll l=1;
	ll mid;
	ll cnt;
	ll i,j;
	while(l<=r){
		mid=(r+l)/2;
		cnt =0;
		for(i=1;i<=n;i++){
			cnt +=min(n,mid/i);
		}
		if(cnt>=k){
			r=mid-1;
		}
		else {
			l=mid+1;

		}
	}
	cout << l;
	
}
