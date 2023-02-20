#include <bits/stdc++.h>

using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	int n,a;
	cin >> n>>a;
	int i;
	map<string,int> m;
	vector<string> v;
	string k;
	for(i=0;i<n+a;i++){
		cin >> k;
		m[k]++;
		if(m[k]>1){
			v.push_back(k);
		}
	}
	sort(v.begin(),v.end());
	cout << v.size()<<"\n";
	for(string s:v){
		cout << s<<"\n";
	}
}
