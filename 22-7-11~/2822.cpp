#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int i,j;
	vector <int> v;
	vector<int> v1;
	vector <int> in;
	int a;
	for(j=0;j<8;j++){
		cin>> a;
		v.push_back(a);
		v1.push_back(a);
	}
	sort(v.begin(),v.end());
	int sum=v[3]+v[4]+v[5]+v[6]+v[7];
	for(i=3;i<8;i++){
		int f=v[i];
		for(j=0;j<8;j++){
			if(f==v1[j]){
				in.push_back(j+1);
			}
		}
	}	
	sort(in.begin(),in.end());
	cout << sum<<"\n";
	for(j=0;j<5;j++){
		cout << in[j]<<" ";
	}
}
