#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b){
	return a>b;
}
vector <ll> v;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	priority_queue<ll>pq;
	ll n;
	ll m;
	cin >> n >> m;
	ll i;
	ll a;
	for(i=0;i<n;i++){
		cin >> a;
		pq.push(a);
	}
	ll co=0;
	ll b;
	for(i=0;i<m;i++){
		cin >> a;
		if(a<=pq.top()){
			co++;
			b=pq.top()-a;
			if(b!=0){
				pq.pop();
				pq.push(b);
			}
			else{
				pq.pop();
			}
		}
		else{
			cout <<"0";
			break;
		}
	}
	if(co==m){
		cout <<"1";
	}

}
