#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int dp[1001]={0,};
	int i;
	dp[1]=1;
	dp[2]=2;
	for(i=3;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
		dp[i]=dp[i]%10007;
	}
	cout << dp[n]%10007;
	
}

