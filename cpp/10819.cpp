#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;

vector<ll> v;
ll vis[10];
ll arr[10];
ll t;
ll ma = 0;
void dfs(ll cnt)
{
    if (cnt == t)
    {
        ll sum = 0;
        for (ll i = 0; i < t - 1; i++)
        {
            sum += (abs(arr[i] - arr[i + 1]));
        }
        ma = max(ma, sum);
        return;
    }
    for (ll i = 0; i < t; i++)
    {
        if (vis[i] == 1)
        {
            continue;
        }
        else
        {
            vis[i] = 1;
            arr[cnt] = v[i];
            dfs(cnt + 1);
            vis[i] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    ll a;
    for (ll i = 0; i < t; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    dfs(0);
    cout << ma;
}