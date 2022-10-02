#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b){
	return a>b;
}
#define max 10007

int dp[1001][10];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n;
	cin >> n;
	int sum=0;
	for(int i=0;i<10;i++){
		dp[1][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<=j;k++){
				dp[i][j]+=dp[i-1][k];
			}
			dp[i][j]%=max;
		}
	}
	for(int i=0;i<10;i++){
		sum=(sum+dp[n][i])%10007;
	}
	cout << sum%10007;
	
}
