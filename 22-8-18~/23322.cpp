#include <bits/stdc++.h>
#define ll long long int
using namespace std;	
vector <int> v;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n,m,a;
	cin >> n >>m;
	for(int i=0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	int co=0;
	int day=0;
	while(1){
		vector<pair<int,int>>p;
		int ma=0;
		bool w=1;
		for(int i=m;i<n;i++){
			if(v[i]>v[i-m]){
				co+=v[i]-v[i-m];
				v[i]=v[i-m];
				w=0;
				break;
			}
		}
		if(w){
			break;
		}
		sort(v.begin(),v.end());
		day+=1;
	}
	cout << co<<" "<<day;
}
