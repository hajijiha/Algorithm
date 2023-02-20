#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	long long dp[1001]={0,};
	dp[1]=1;
	dp[2]=3;
	for(int i=3;i<=n;i++){
		long long k=dp[i-1]+dp[i-2]*2;
		dp[i]=k%10007;
		
	}
	cout << dp[n];
	
	
}
