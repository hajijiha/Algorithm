#include <bits/stdc++.h>
using namespace std;
int n;
int v[1004001]={0,};
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> n;
	int i,j;
	for(i=2;i<=1100;i++){
		for(j=2*i;j<=1004000;j+=i){
			v[j]=1;
		}
	}
	vector <int> re;
	for(i=2;i<=1004000;i++){
		if(v[i]==0){
			re.push_back(i);
		}
	}
	int a=re.size();
	for(i=0;i<a;i++){
		if(re[i]>=n){
			int c=re[i];
			string s1=to_string(c);
			string s2=to_string(c);
			reverse(s2.begin(),s2.end());
			if(s1.compare(s2)==0){
				cout<<c;
				break;
			}
		}
	}
}
