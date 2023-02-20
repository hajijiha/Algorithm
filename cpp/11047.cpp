#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	ll n,k;
	ll i,j;
	cin >> n >> k;
	vector <ll> v;
	ll a;
	for(i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	reverse(v.begin(),v.end());
	ll co=0;
	for(i=0;i<n;i++){
		while(k>0){
			if(k>=v[i]){
					k-=v[i];
					co++;
			}
			else{
				break;
			}
		}
	}
	cout << co;	
}
