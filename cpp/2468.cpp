#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int arr[101][101];
int vis[101][101];
int n;
int re = 1;
int ma = 0;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
void init()
{
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            vis[i][j] = 0;
        }
    }
}
void bfs(int y, int x, int val)
{
    queue<pair<int, int>> q;
    q.push({y, x});
    vis[y][x] = 1;
    while (!q.empty())
    {
        int ny = q.front().first;
        int nx = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int rx = nx + dx[i];
            int ry = ny + dy[i];
            if (rx >= 1 && rx <= n && ry >= 1 && ry <= n)
            {
                if (vis[ry][rx] == 0)
                {
                    if (arr[ry][rx] > val)
                    {
                        q.push({ry, rx});
                    }
                    vis[ry][rx] = 1;
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            ma = max(ma, arr[i][j]);
        }
    }
    for (int i = 1; i <= ma; i++)
    {
        init();
        int e = 0;
        for (int j = 1; j <= n; j++)
        {
            for (int f = 1; f <= n; f++)
            {
                if (arr[j][f] > i && vis[j][f] == 0)
                {
                    bfs(j, f, i);
                    e++;
                }
            }
        }
        re = max(re, e);
    }
    cout << re;
}
