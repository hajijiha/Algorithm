#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
string s;
char a;
int l, r;
int q;
int dp[27][200001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    cin >> q;
    q--;
    cin >> a >> l >> r;
    int n = s.size();
    dp[s[n - 1] - 'a'][n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= 26; j++)
        {
            if (j != s[i] - 'a')
            {
                dp[j][i] = dp[j][i + 1];
            }
        }
        dp[s[i] - 'a'][i] = dp[s[i] - 'a'][i + 1] + 1;
    }
    if (r == n - 1)
    {
        cout << dp[a - 'a'][l] << "\n";
    }
    else
    {
        cout << dp[a - 'a'][l] - dp[a - 'a'][r + 1] << "\n";
    }
    while (q--)
    {
        cin >> a >> l >> r;
        if (r == n - 1)
        {
            cout << dp[a - 'a'][l] << "\n";
        }
        else
        {
            cout << dp[a - 'a'][l] - dp[a - 'a'][r + 1] << "\n";
        }
    }
}
