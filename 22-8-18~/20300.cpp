#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n;
	cin >> n;
	vector <ll> v;
	ll a;
	for( int i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	ll m=0;
	if(n%2==0){
		int w=n/2;
		for(int i=0; i<w;i++){
			m=max(v[i]+v[n-1-i],m);
		}
		cout << m;
	}
	else{
		m=v[n-1];
		int w=n/2;
		for (int i=0;i<w;i++){
			m=max(v[i]+v[n-2-i],m);
			
		}
		cout << m;
	}
	
	
	
}
