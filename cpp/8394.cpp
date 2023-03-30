#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dp[10000001];
int main()
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    int n;
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10;
    }
    cout << dp[n];
}
