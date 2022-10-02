#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v;
void cal(int val){
	int l=0;
	int r=v.size()-1;
	int mid;
	int low=-1;
	int up=-1;
	while(l<=r){
		mid=(r+l)/2;
		if(v[mid]>=val){
			r=mid-1;
			low=mid;
		}
		else {
			l=mid+1;
		}
	}
	l=0;
	r=v.size()-1;
	while(l<=r){
		mid=(r+l)/2;
		if(v[mid]>val){
			r=mid-1;
			up=mid;
		}
		else {
			l=mid+1;
		}
	}
	if(low!=-1){
		if(up!=-1){
			cout << (up-low) <<" ";
		}
		else{
			cout << (v.size()-low)<<" ";
		}
	}
	else{
		cout <<"0 ";
	}
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	cin >>n;
	int i,j;
	int a;
	for(i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	cin >> m;
	sort(v.begin(),v.end());
	int b;
	for(i=0;i<m;i++){
		cin >> b;
		cal(b);
	}
	
}

	
	
	
