#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll pow(ll a ,ll b, ll c){
	if(b==0){
		return 1;
	}
	ll half=pow(a,b/2,c);
	half=half*half%c;
	if(b%2==0) return half;
	else return half*a%c;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	ll a,b,c;
	cin >> a >> b >> c;
	cout << pow(a,b,c);
	
	
}
