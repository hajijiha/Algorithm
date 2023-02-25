#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
ll dp[1000001];
ll d = 1000000009;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (ll i = 4; i <= 1000000; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % d;
    }
    ll t;
    cin >> t;
    ll a;
    for (ll i = 0; i < t; i++)
    {
        cin >> a;
        cout << dp[a] << "\n";
    }
}