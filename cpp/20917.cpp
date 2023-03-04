#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;
        ll a;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        ll st = 1;
        ll end = v[n - 1] - v[0];
        ll mid;
        ll k = 0;
        while (st <= end)
        {
            mid = (st + end) / 2;
            queue<ll> q;
            q.push(v[0]);
            ll com = v[0];
            for (ll i = 1; i < n; i++)
            {
                if (v[i] - com >= mid)
                {
                    q.push(v[i]);
                    com = v[i];
                }
            }
            if (q.size() < s)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
                k = max(k, mid);
            }
        }
        cout << k << "\n";
    }
}