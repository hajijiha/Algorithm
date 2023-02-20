#include <bits/stdc++.h>
using namespace std;

vector <int> fail(string s){
		int i=1,j=0;
		int n=s.length();
		vector <int> table(n,0);
		for(i;i<n;i++){
			while(j>0&&s[i]!=s[j]){
				j=table[j-1];
			}
			if(s[i]==s[j]){
				table[i]=++j;
			}
		}
		return table;
}


int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	int i,j;
	int n=s.length();
	int ma=0;
	for(i=0;i<n;i++){
		vector <int> v=fail(s.substr(i,n-i));
		int k=v.size();
		for(j=0;j<k;j++){
			ma=max(ma,v[j]);
		}
	}
	cout << ma;
}
