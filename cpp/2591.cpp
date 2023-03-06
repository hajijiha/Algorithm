#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;
string s;
int dp[41][3];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    int n = s.size();
    dp[1][1] = 1;
    int t = s[0] - '0';
    t *= 10;
    for (int i = 2; i <= n; i++)
    {
        int v = s[i - 1] - '0';
        if (v == 0)
        {
            if (t + v <= 34)
            {
                dp[i][2] = dp[i - 1][1];
                t = v * 10;
                continue;
            }
        }
        if (t + v <= 34)
        {
            dp[i][2] = dp[i - 1][1];
            dp[i][1] = dp[i - 1][2] + dp[i - 1][1];
        }
        else
        {
            dp[i][1] = dp[i - 1][2] + dp[i - 1][1];
        }
        t = v * 10;
    }
    cout << dp[n][1] + dp[n][2];
}