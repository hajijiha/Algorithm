#include <bits/stdc++.h>
using namespace std;
long long dp[1001][1001];
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	string s1;
	string s2;
	cin >> s1 >> s2;
	int n=s1.size();
	int m=s2.size();
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=m;j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		char c=s1[i];
		for(j=0;j<m;j++){
			if(c==s2[j]){
				dp[i+1][j+1]=dp[i][j]+1;
			}
			else{
				dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
			}
		}
	}
	cout << dp[n][m];
	
	
}
