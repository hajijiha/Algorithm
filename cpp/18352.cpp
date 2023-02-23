#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using pll = pair<ll, ll>;
ll n, m, k, st;
vector<vector<ll>> v;
ll co = 0;
ll vis[300001];
ll e = 100000000;
void bfs(ll a)
{
    vis[a] = 1;
    vis[a] = 0;
    queue<pair<ll, ll>> q;
    q.push({a, 0});
    while (!q.empty())
    {
        ll now = q.front().first;
        ll depth = q.front().second;
        q.pop();
        vis[now] = min(vis[now], depth);
        for (ll val : v[now])
        {
            if (vis[val] == e)
            {
                q.push({val, depth + 1});
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> k >> st;
    v.resize(n + 1);
    ll a, b;
    for (ll i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
    }
    for (ll i = 0; i <= n; i++)
    {
        vis[i] = e;
    }
    bfs(st);
    vector<ll> re;
    for (ll i = 1; i <= n; i++)
    {
        if (vis[i] == k)
        {
            re.push_back(i);
        }
    }
    if (re.empty())
    {
        cout << "-1";
    }
    else
    {
        for (ll i = 0; i < re.size(); i++)
        {
            cout << re[i] << "\n";
        }
    }
}
