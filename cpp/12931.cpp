#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;
vector<int> v;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int co = 0;
    while (1)
    {
        bool f = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                f = 0;
            }
        }
        if (f)
            break;
        bool e = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 1)
            {
                v[i] -= 1;
                co++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                v[i] /= 2;
                e = 1;
            }
        }
        if (e)
        {
            co++;
        }
    }
    cout << co;
}