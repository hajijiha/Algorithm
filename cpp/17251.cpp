#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;

ll n;
vector<ll> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    ll a;
    ll ma = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        ma = max(ma, a);
    }
    ll r = 0;
    ll b = 0;
    vector<ll> index;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == ma)
        {
            index.push_back(i);
        }
    }
    if (index.size() == 1)
    {
        r = n - 1 - index[0];
        b = index[0];
        if (r > b)
        {
            cout << "R";
        }
        else if (b > r)
        {
            cout << "B";
        }
    }
    else
    {
        ll k = index.size();
        k -= 1;
        b = index[0];
        r = n - 1 - index[k];
        if (b == r)
        {
            cout << "X";
        }
        else if (b > r)
        {
            cout << "B";
        }
        else
        {
            cout << "R";
        }
    }
}