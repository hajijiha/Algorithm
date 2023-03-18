#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
int n, m;
deque<int> q;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        q.push_back(i);
    }
    int co = 0;
    while (m--)
    {
        int k;
        cin >> k;
        int f = q.size();
        int left;
        int right;
        for (int i = 0; i < f; i++)
        {
            if (q[i] == k)
            {
                left = i;
                right = f - i;
                break;
            }
        }
        if (left < right)
        {
            while (1)
            {
                if (q.front() == k)
                {
                    q.pop_front();
                    break;
                }
                ++co;
                q.push_back(q.front());
                q.pop_front();
            }
        }
        else
        {
            while (1)
            {

                if (q.front() == k)
                {
                    q.pop_front();
                    break;
                }
                ++co;
                q.push_front(q.back());
                q.pop_back();
            }
        }
    }
    cout << co;
}