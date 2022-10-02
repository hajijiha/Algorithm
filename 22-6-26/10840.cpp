#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	int n,m;
	n=s1.length();
	m=s2.length();
	int i;
	int j;
	vector<int> v;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s1[i]==s2[j]){
				v.push_back(j);
			}
		}
	}
	int r=v.size();
	if(r==0){
		cout <<'0';
	}

}
