#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
	if(a.second==b.second){
		return a.first<b.first;
	}
	return a.second<b.second;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	ll i,n;
	cin >> n;
	vector<pair<ll,ll>> v;
	ll a,b;
	for(i=0;i<n;i++){
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),cmp);
	ll co=1;
	ll end=v[0].second;
	for(i=1;i<n;i++){
		if(v[i].first>=end){
			co++;
			end=v[i].second;
		}
	}
	cout << co;
	
	
}
