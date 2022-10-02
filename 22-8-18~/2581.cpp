#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n,m;
int arr[10001]={0,};
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n >> m;
	arr[1]=1;
	for(int i=2;i<=101;i++){
		for(int j=2*i;j<=10000;j+=i){
			arr[j]=1;
		}
	}
	int ma=999999;
	int sum=0;
	for(int j=n;j<=m;j++){
		if(arr[j]==0){
			ma=min(ma,j);
			sum+=j;
		}
	}
	if(sum==0){
		cout <<"-1";
	}
	else{
		cout << sum <<"\n"<<ma;	
	}
}
