#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	deque <int> v;
	int n;
	cin >> n;
	int i;
	for(i=0;i<n;i++){
		int a;
		cin >> a;
		if(a==0){
			v.pop_back();
		}
		else{
			v.push_back(a);
		}
	}
	int f=v.size();
	if(f==0){
		cout <<"0";
	}
	else{
		int sum=0;
		for(i=0;i<f;i++){
			sum+=v[i];
		}
		cout << sum;
	}
}
