#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using pll = pair<ll, ll>;
ll arr[1000010];
ll n, m;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (ll i = 2; i * i <= m; i++)
    {
        ll f = i * i;
        ll x = n / f;
        if (n % f != 0)
        {
            x++;
        }
        for (ll j = x; j * f <= m; j++)
        {
            arr[j * f - n] = 1;
        }
    }
    ll co = 0;
    for (ll i = 0; i < m - n + 1; i++)
    {
        if (arr[i] == 0)
        {
            co++;
        }
    }
    cout << co;
}
