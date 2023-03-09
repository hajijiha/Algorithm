#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define ALL(x) x.begin(), x.end()
#define pll pair<ll, ll>
#define pii pair<int, int>

using namespace std;
int n;
vector<int> v;
int arr[11];
int vis[11];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    arr[v[0] + 1] = 1;
    vis[1] = 1;
    for (int i = 1; i < n; i++)
    {
        int co = 0;
        for (int j = 1; j <= n; j++)
        {
            if (co == v[i] && arr[j] == 0)
            {
                arr[j] = i + 1;
                vis[i + 1] = 1;
                break;
            }
            if (arr[j] == 0)
            {
                co += 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}