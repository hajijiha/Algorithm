#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
int x, y, h;
int arr[101][101][101];
int vis[101][101][101];
int re[101][101][101];
int co = 0;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dh[] = {1, -1};

queue<tuple<int, int, int>> q;
void bfs()
{
    while (!q.empty())
    {
        int eh = get<0>(q.front());
        int ey = get<1>(q.front());
        int ex = get<2>(q.front());
        q.pop();
        for (int j = 0; j < 4; j++)
        {
            int nx = ex + dx[j];
            int ny = ey + dy[j];
            if (nx >= 1 && nx <= x && ny >= 1 && ny <= y && eh >= 1 && eh <= h)
            {
                if (vis[eh][ny][nx] == 0)
                {
                    vis[eh][ny][nx] = 1;
                    re[eh][ny][nx] = re[eh][ey][ex] + 1;
                    q.push(make_tuple(eh, ny, nx));
                }
            }
        }
        for (int i = 0; i < 2; i++)
        {
            int nh = eh + dh[i];
            if (nh >= 1 && nh <= h)
            {
                if (vis[nh][ey][ex] == 0)
                {
                    vis[nh][ey][ex] = 1;
                    re[nh][ey][ex] = re[eh][ey][ex] + 1;
                    q.push(make_tuple(nh, ey, ex));
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
    cin >> x >> y >> h;
    bool e = 1;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            for (int f = 1; f <= x; f++)
            {
                cin >> arr[i][j][f];
                if (arr[i][j][f] == 0)
                {
                    e = 0;
                }
                else if (arr[i][j][f] == 1)
                {
                    q.push(make_tuple(i, j, f));
                    vis[i][j][f] = 1;
                }
                else
                {
                    vis[i][j][f] = 1;
                }
            }
        }
    }
    if (e)
    {
        cout << "0";
    }
    else
    {
        bfs();
        bool t = 1;
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= y; j++)
            {
                for (int f = 1; f <= x; f++)
                {
                    if (vis[i][j][f] == 0)
                    {
                        t = 0;
                    }
                    co = max(co, re[i][j][f]);
                }
            }
        }
        if (t)
        {
            cout << co;
        }
        else
        {
            cout << "-1";
        }
    }
}