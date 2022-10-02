#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	ll n;
	cin >>n;
	vector <ll> v;
	ll i;
	ll a;
	for(i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	ll b;
	b=1;
	ll c;
	ll j;
	for(i=0;i<n;i++){
		c=v[i];
		for(j=b;j<n;j++){
			if(c!=v[j]){
				cout <<j+1<<" ";
				b=j;
				break;
			}
			else{
				if(v[n-1]==c){
					cout <<"-1 ";
					break;
				}
				else{
					continue;
				}
				
			}
		}
	}
}
