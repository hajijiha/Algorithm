#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
int n;
int sum[100001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        sum[i] = sum[i - 1] + a;
    }
    int m;
    cin >> m;
    while (m--)
    {
        int b, c;
        cin >> b >> c;
        cout << sum[c] - sum[b - 1] << "\n";
    }
}
