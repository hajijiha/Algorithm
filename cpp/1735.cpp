#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;
int a1, a2;
int b1, b2;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a1 >> a2 >> b1 >> b2;
    a1 = a1 * b2;
    b1 = b1 * a2;
    a2 = a2 * b2;
    int re1 = a1 + b1;
    int re2 = a2;
    int r = gcd(re1, re2);
    cout << re1 / r << " " << re2 / r;
}
