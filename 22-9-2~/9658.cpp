#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int co=0;
int n,m;
int ca=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int arr[3]={1,3,4};
int dp[10001];
priority_queue <int> q;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	dp[1]=0;
	dp[2]=1;
	dp[3]=0;
	dp[4]=1;
	for(int i=5;i<=n;i++){
		if(min({dp[i-1],dp[i-3],dp[i-4]})==1){
			dp[i]=0;
		}
		else {
			dp[i]=1;
		}
	}
	if(dp[n]==0){
		cout <<"CY";
	}
	else{
		cout <<"SK";
	}
	
	
}
