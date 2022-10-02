#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	ll n,m;
	cin >>n >>m;
	ll k=(n)/(m+1);
	k=k*(m+1);
	n=n-k;
	if(n==1){
		cout << "Can't win";
	}
	else{
		cout <<"Can win";
	}
	
}
