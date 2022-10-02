#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
ll arr1[11];
ll arr2[11];
ll v=10000000000;
vector <pair<ll,ll>> value;
bool visited[11]={0,};
void cal (ll id,ll co,ll ix){
	if(id==co){
		ll sum1=1;	ll sum2=0;	ll sum3=0;
		for (ll i=0;i<co;i++){
			sum1*=arr1[i];
			sum2+=arr2[i];
		}
		sum3=abs(sum1-sum2);
		v=min(v,sum3);
		return;
	}
	for(ll i=ix;i<n;i++){
		if(!visited[i]){
			visited[i]=true;
			arr1[id]=value[i].first;
			arr2[id]=value[i].second;
			cal(id+1,co,i);
			visited[i]=false;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	ll a,b;
	for(ll i=1;i<=n;i++){
		cin >> a >> b;
		value.push_back({a,b});
	}
	for(ll i=1;i<=n;i++){
		cal(0,i,0);
	}
	cout << v;
	
}
