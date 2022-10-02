#include <bits/stdc++.h>
#define ll long long int
using namespace std;
# define max 1000000007
int n;
vector <ll> v;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >>  n;
	ll a;
	ll k=0;
	for(int i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
		k+=a;
	}
	sort(v.begin(),v.end());
	ll sum=0;
	for (int i=0;i<n;i++){
		k-=v[i];
		sum+=v[i]*k;
		sum%=max;
	}
	cout << sum%max;
}



