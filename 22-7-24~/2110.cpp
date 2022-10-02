#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int n,m;
	cin >> n >> m;
	int i,j,a;
	vector <int> v;
	int k=0;
	int re=0;
	for(i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
		k=max(k,a);
	}
	sort(v.begin(),v.end());
	int l=1;
	int r=v.back()-v[0];
	int mid;
	while(l<=r){
		mid=(l+r)/2;
		int num=1;
		int bef=0;
		for(i=1;i<n;i++){
			if(v[i]-v[bef]>=mid){
				num++;
				bef=i;
			}
		}
		if(num>=m){
			re=max(re,mid);
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	cout << re;
}
