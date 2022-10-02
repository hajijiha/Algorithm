#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector <int> v;
int main(){
	 cout.tie(0);
	 int n;
	 scanf("%d",&n);
	 int i;
	 int a;
	 for(i=0;i<n;i++){
	 	scanf("%d",&a);
	 	v.push_back(a);
	 }
	int m=(n+1)/2;
	int co=0;
	int k;
	sort(v.begin(),v.end());
	for(i=0;i<m;i++){
		k=v[i];
		while(k>1){
			k/=2;
			co+=1;
		}
	}
	cout << co+1;
	 
	}
	
	

