#include <bits/stdc++.h>
using namespace std;
int n;
int i,j;
long long sum=0;
bool cmp(pair<long long int,long long int> a,pair<long long int,long long int> b){
	if(a.second==b.second) return a.first < b.first;
	return a.second > b.second;
}
int main() {
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	vector <pair <long long int,long long int>> v;
	for(i=0;i<n;i++){
		long long int a,b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));	
	}
	sort(v.begin(),v.end(),cmp);
	if(n==1){
		cout <<"0";
	}
	else{	
	for(i=0;i<n;i++){
		long long int tf=1000000000;
		bool t=0;
		if(i==n-1){
			if(v[i].second==v[i-1].second){
				sum+=(abs(v[i].first-v[i-1].first));
				}
				break;
			}
		 if(i==0){
			if(v[i].second==v[i+1].second){
				sum+=abs(v[i+1].first-v[i].first);
				}
				continue;
			}
	 	if(v[i].second==v[i-1].second){
			tf=min(tf,abs(v[i].first-v[i-1].first));
			t=1;
			}
		 if(v[i].second==v[i+1].second){
			tf=min(tf,abs(v[i+1].first-v[i].first));
			t=1;
			}
		if(t==0){
			tf=0;
		}
		sum+=tf;
		}
		cout << sum;
	}		
}
