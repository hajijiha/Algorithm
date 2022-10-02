#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	int t,n,i,j;
	cin >> n;
	for(i=0;i<n;i++){
		vector <int> v;
		int ma=0;
		int mi=11;
		for(j=0;j<5;j++){
			int a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		int tf=v[3]-v[1];
		int sum=0;
		if(tf>=4){
			cout<<"KIN\n";
		}
		else{
			sum=v[1]+v[2]+v[3];
			cout << sum<<"\n";
		}
				
	}
}
