#include <bits/stdc++.h>
#define ll long long int
using namespace std;
	int dp[1001];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n;
	cin >> n;
	dp[1]=1;
	dp[2]=0;
	dp[3]=1;
	dp[4]=1;
	for(int i=5;i<=n;i++){
		if(min({dp[i-1],dp[i-3],dp[i-4]})==1){
			dp[i]=0;
					}
		else{
			dp[i]=1;
		}
	}
	if(dp[n]==1){
		cout<<"SK";
	}
	else{
		cout<<"CY";
	}
	
}
