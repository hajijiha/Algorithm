#include <bits/stdc++.h>
using namespace std;
long long int cal(long long int a, long long int b){
	long long int c=max(a,b);
	long long int d=min(a,b);
	long long int tmp;
	while(d!=0){
		tmp=c%d;
		c=d;
		d=tmp;
		}
		return (a*b)/c;
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector <long long int> v;
	int i,j;
	long long int a;
	for(i=0;i<n-2;i++){
		cin >> a;
		v.push_back(a);
	}
	j=0;
	if(n==3){
		cout << v[0];
	}
	else{
	int m=n-2;
	j=0;
	long long int g=cal(v[0],v[1]);
	long long int re=g;
	for(i=2;i<m;i++){
			re=cal(g,v[i]);
			g=re;
		}
		cout << g;
	}
	
}
