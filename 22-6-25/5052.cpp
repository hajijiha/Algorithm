#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	int n;
	int i,j;
	cin >> n;
	while(n--){
		int m;
		cin >> m;
		vector<string> v;
		string k;
		for(i=0;i<m;i++){
			cin >> k;
			v.push_back(k);
		}
		sort(v.begin(),v.end());
		int si=v.size();
		bool flag=1;
		for(i=0;i<=si-2;i++){
			int cur=v[i].size();
			int next=v[i+1].size();
			if(cur>=next){
				continue;
			}
			if(v[i+1].substr(0,cur)==v[i]){
				flag=0;
				break;
			}
		}
		if(flag==1){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	
	
	
}
