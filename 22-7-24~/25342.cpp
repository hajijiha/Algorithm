#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pll pair<ll, ll>
#define lcm(a, b) a * b / gcd(a, b)
using namespace std;
ll gcd(ll a, ll b) {
	ll c;
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
ll arr[100001]={0,};
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll i,j;
	for(i=2;i<320;i++){
		for(j=i*2;j<=100000;j+=i){
			arr[j]=1;
		}
	}
	arr[1]=1;
	vector<ll> v;
	for(i=1;i<=100000;i++){
		if(arr[i]!=1){
			v.push_back(i);
		}
	}
	ll t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll ans = n*(n-1);
		if (n%2!=0){
			ans=ans*(n-2);
		}
		else{
			ll a1=ans*(n-3)/gcd(ans,n-3);
			ll a2=ans*(n-2)/gcd(ans,n-2);
			ll a3=(n-1)*(n-2)*(n-3);
			ll m=v.size();
			ll ma=0;
			for(i=0;i<m;i++){
				if(v[i]<n-1){
					ma=max(ma,v[i]);	
				}
			}
			ll a4=ans*ma/gcd(ans,ma);
			ans=max({a1,a2,a3});
			ans=max(ans,a4);	
		}
		cout << ans<<"\n";
	}
}
