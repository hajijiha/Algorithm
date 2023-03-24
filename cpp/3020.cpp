#include <bits/stdc++.h>

using namespace std;

int n, h;
int vis1[500001];
int vis2[500001];
int mi = 1000000;
int re[500001];
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> h;
    int a;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i % 2 == 1)
        {
            vis1[a]++;
        }
        else
        {
            vis2[h - a + 1]++;
        }
    }
    for (int i = 1; i <= h; i++)
    {

        vis2[i] += vis2[i - 1];
        vis1[h - i] += vis1[h - i + 1];
    }
    int co = 0;
    for (int i = 1; i <= h; i++)
    {
        int v = vis1[i] + vis2[i];
        if (v < mi)
        {
            mi = v;
            co = 1;
        }
        else if (v == mi)
        {
            co++;
        }
    }
    cout << mi << " " << co;
}
