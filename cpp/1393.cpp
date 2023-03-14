#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int rx;
int ry;
int nx;
int ny;
int dx;
int dy;
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return gcd(y, x % y);
}
int check(int x1, int x2, int y1, int y2)
{
    int r = (x2 - x1) * (x2 - x1) + ((y2 - y1) * (y2 - y1));
    return r;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> rx >> ry >> nx >> ny >> dx >> dy;
    if (dx == 0 || dy == 0)
    {
        if (dx == 0 && dy != 0)
        {
            dy = 1;
        }
        else if (dy == 0 && dx != 0)
        {
            dx = 1;
        }
    }
    else
    {
        int k = gcd(dx, dy);
        dx /= k;
        dy /= k;
    }
    int x = nx;
    int y = ny;
    int mi = 10000000;
    int tmp = check(x, rx, y, ry);
    while (1)
    {
        int e = check(x, rx, y, ry);
        mi = min(mi, e);
        x += dx;
        y += dy;
        if (e > tmp)
        {
            break;
        }
        else
        {
            tmp = e;
        }
    }
    x = nx;
    y = ny;
    while (1)
    {
        int j = check(x, rx, y, ry);
        if (j == mi)
        {
            cout << x << " " << y;
            break;
        }
        x += dx;
        y += dy;
    }
}
