#include <bits/stdc++.h>
#define ll long long int
using namespace std;
	int pre[1001]={0,};
	int pas[1001]={0,};
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n,m;
	cin >> n >>m;
	for(int i=0;i<n;i++){
		cin >> pre[i];
	}
	for(int i=0;i<m;i++){
		cin >> pas[i];
	}
	int re=0;
	for(int i=0;i<m;i++){
		if(pas[i]>pre[i]){
			re=max(re,pas[i]-pre[i]);
		}
	}
	cout << re;
	
	
}
