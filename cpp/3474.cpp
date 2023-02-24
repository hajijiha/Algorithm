#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using pll = pair<ll, ll>;
ll t;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    ll a;
    for (ll i = 0; i < t; i++)
    {
        cin >> a;
        ll sum = 1;
        ll x = 0;
        x += a / 5;
        ll k = 25;
        while (k <= a)
        {
            x += a / k;
            k *= 5;
        }

        cout << x << "\n";
    }
}
