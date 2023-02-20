#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,m;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	ll i,j;
	cin >> n >> m;
	vector <ll> v;
	ll a;
	for(i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	ll l=1;
	ll r=1000000000;
	ll mid;
	ll re=0;
	while(l<=r){
		mid=(r+l)/2;
		ll sum=0;
		for(i=0;i<n;i++){
			if(v[i]>mid){
				sum+=v[i]-mid;
			}
		}
		if(sum < m){
			r=mid-1;
		}
		else{
			re=mid;
			l=mid+1;
		}
	}
	cout << re;
}
