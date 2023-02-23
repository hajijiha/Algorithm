#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using pll = pair<ll, ll>;
ll n, m;
ll dp[31][2];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    dp[1][0] = 1;
    dp[2][1] = 1;
    for (ll i = 3; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
        dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
    }
    ll x = dp[n][0];
    ll y = dp[n][1];

    ll re0 = 0;
    ll re1 = 0;
    ll sum = m;
    while (1)
    {
        sum -= x;
        re0++;
        if (sum % y == 0)
        {
            re1 = sum / y;
            break;
        }
    }
    cout << re0 << "\n"
         << re1;
}