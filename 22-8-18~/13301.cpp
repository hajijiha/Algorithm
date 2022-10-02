#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
ll arr[81];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	arr[1]=1;
	arr[2]=2;
	arr[3]=3;
	if(n==1){
		cout <<"4";
	}
	else{
		for(int i=4;i<=n;i++){
			arr[i]=arr[i-1]+arr[i-2];
		}
		cout <<2*arr[n]+2*arr[n-1];
	}
	
	
}
