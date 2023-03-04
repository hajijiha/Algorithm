#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;
ll n, m, k;
ll ma = 0;
ll dx[] = {0, 0, 1, -1};
ll dy[] = {1, -1, 0, 0};
ll mop[1001][1001];
void dfs(ll x, ll y, ll cnt, ll co)
{
    if (cnt == k)
    {
        ma = max(ma, co);
        return;
    }
    for (ll i = 0; i < 4; i++)
    {
        ll nx = x + dx[i];
        ll ny = y + dy[i];
        if (nx >= 1 && nx <= m && ny >= 1 && ny <= n && mop[ny][nx] != -1)
        {
            bool e = false;
            if (mop[ny][nx] == 1)
            {
                mop[ny][nx] = 0;
                e = true;
            }
            dfs(nx, ny, cnt + 1, co + e);
            if (e)
                mop[ny][nx] = 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> k;
    ll nx, ny;
    char c;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cin >> c;
            if (c == 'G')
            {
                nx = j;
                ny = i;
            }
            else if (c == 'S')
            {
                mop[i][j] = 1;
            }
            else if (c == '#')
            {
                mop[i][j] = -1;
            }
        }
    }
    dfs(nx, ny, 0, 0);
    cout << ma << endl;
}