#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;

ll t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> v;
    string s;
    vector<string> val;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    ll co = t;
    for (ll i = 0; i < t; i++)
    {
        ll e = 0;
        for (ll j = i + 1; j < t; j++)
        {
            string a = "";
            for (ll f = 0; f < v[j].size(); f++)
            {
                a += v[j][f];
                if (a == v[i])
                {
                    co--;
                    e = 1;
                    break;
                }
            }
            if (e == 1)
            {
                break;
            }
        }
    }
    cout << co;
}