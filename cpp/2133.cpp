#include <bits/stdc++.h>
using namespace std;
vector <int> oper;
vector <long long> re;
int n;
long long ma=-99999999;
long long mi=99999999;
vector <long long> v;
void cal(){
	int i;
	long long res=v[0];
	for(i=1;i<n;i++){
		if(oper[i-1]==0){
			res+=v[i];
		}
		if(oper[i-1]==1){
			res-=v[i];
		}
		if(oper[i-1]==2){
			res*=v[i];
		}
		if(oper[i-1]==3){
			res/=v[i];
		}
	}
	if(res > ma){
		ma=res;
	}
	if(res < mi){
		mi=res;
	}
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int i,j;
	cin >> n;
	for(i=0;i<n;i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	for(i=0;i<4;i++){
		int b;
		cin >> b;
		while(b--){
			oper.push_back(i);
		}
	}
	do{
		cal();	
	}
	while(next_permutation(oper.begin(),oper.end()));
	cout << ma <<"\n"<<mi;
	
	
		
}
