#include <bits/stdc++.h>

using namespace std;
vector<int> r;
int n;
int rel[401][401];
int maps[101][101];
int dx[] = {0, -1, 1, 0};
int dy[] = {-1, 0, 0, 1};
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int a, b, c, d, k;
    for (int i = 1; i <= n * n; i++)
    {
        cin >> a >> b >> c >> d >> k;
        rel[a][b] = 1;
        rel[a][c] = 1;
        rel[a][d] = 1;
        rel[a][k] = 1;
        r.push_back(a);
    }
    maps[2][2] = r[0];
    for (int i = 1; i < n * n; i++)
    {
        int x = 0;
        int y = 0;
        int mi1 = -1;
        int mi2 = -1;
        for (int j = 1; j <= n; j++)
        {
            for (int f = 1; f <= n; f++)
            {
                int co1 = 0;
                int co2 = 0;
                if (maps[j][f] == 0)
                {
                    for (int e = 0; e < 4; e++)
                    {
                        int ny = j + dy[e];
                        int nx = f + dx[e];
                        if (ny >= 1 && ny <= n && nx >= 1 && nx <= n)
                        {
                            if (maps[ny][nx] == 0)
                            {
                                co1++;
                            }
                            else
                            {
                                if (rel[r[i]][maps[ny][nx]] == 1)
                                {
                                    co2++;
                                }
                            }
                        }
                    }
                    if (co2 > mi2)
                    {
                        mi2 = co2;
                        x = f;
                        y = j;
                        mi1 = co1;
                    }
                    else if (co2 == mi2)
                    {
                        if (mi1 < co1)
                        {
                            mi1 = co1;
                            x = f;
                            y = j;
                        }
                    }
                }
            }
        }
        maps[y][x] = r[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int co = 0;
            for (int e = 0; e < 4; e++)
            {
                int ny = i + dy[e];
                int nx = j + dx[e];

                if (ny >= 1 && ny <= n && nx >= 1 && nx <= n)
                {
                    if (rel[maps[i][j]][maps[ny][nx]] == 1)
                    {
                        co++;
                    }
                }
            }
            if (co == 1)
            {
                sum++;
            }
            else if (co == 2)
            {
                sum += 10;
            }
            else if (co == 3)
            {
                sum += 100;
            }
            else if (co == 4)
            {
                sum += 1000;
            }
        }
    }
    cout << sum;
}
