#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	long long int n;
	cin >> n;
	vector <long long int> v;
	while(n>9){
		v.push_back(n%10);
		n/=10;
	}
	v.push_back(n);
	int k=v.size();
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<k;i++){
		cout<<v[i];
	}
}
