#include <bits/stdc++.h>

using namespace std;
int n;
int arr[100001];
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 2; i <= sqrt(100000) + 1; i++)
    {
        for (int j = 2 * i; j <= 100000; j += i)
        {
            arr[j] = 1;
        }
    }
    cin >> n;
    while (n--)
    {
        vector<pair<int, int>> v;
        int a;
        cin >> a;
        for (int i = 2; i <= 100000; i++)
        {
            if (a == 1)
            {
                break;
            }
            if (a % i == 0)
            {
                int co = 0;
                while (a > 0)
                {
                    if (a % i == 0)
                    {
                        a /= i;
                        co++;
                    }
                    else
                    {
                        break;
                    }
                }
                v.push_back({i, co});
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].first << " " << v[i].second << "\n";
        }
    }
}
