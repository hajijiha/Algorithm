#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	int n,i,j;
	cin >> n;
	int arr[1001];
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	int dp[10001]={0,};
	int ma=0;
	dp[0]=arr[0];
	for(i=0;i<n;i++){
		dp[i]=1;
		for(j=0;j<i;j++){
			if(arr[j]<arr[i]){
				dp[i]=max(dp[j]+1,dp[i]);
			}
		}
	} 
	for(i=0;i<n;i++){
		ma=max(ma,dp[i]);
	}
	cout << ma;
}
