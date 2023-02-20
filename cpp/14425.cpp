#include <bits/stdc++.h>

using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	int n,m;
	map<string,int> mp;
	vector<string> v;
	int i;
	cin >> n >> m;
	string k;
	int count=0;
	for(i=0;i<n;i++){
		cin >> k;
		mp[k]=1;
	}
	for(i=0;i<m;i++){
		cin >> k;
		if(mp[k]!=0){
			count++;
		}
	}
	cout << count;
	
}
