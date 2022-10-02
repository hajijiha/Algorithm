#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	ll n,m;
	cin >> n >> m;
	ll i,k;
	ll co=0;
	ll a=min(n,m);
	ll b=max(n,m);
	co+=b;
	co+=a/10;
	co+=a;
	cout << co;
	
	
}
