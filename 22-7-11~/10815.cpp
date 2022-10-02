#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v;
int cal(int val){
	int l=0;
	int r=v.size()-1;
	int mid;
	while(l<=r){
		mid=(r+l)/2;
		if(v[mid]==val){
			return 1;
		}
		else if(v[mid]>val){
			r=mid-1;
		}
		else {
			l=mid+1;
		}
	}
	return 0;
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
	for(i=0;i<m;i++){
		cin >> a;
		cout << cal(a)<<" ";
	}
	
}

