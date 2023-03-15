#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
int t, n;
vector<pair<int, int>> re;
vector<int> v;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int co = 0;
    for (int i = 0; i < n; i++)
    {
        if (co < t)
        {
            bool f = 1;
            if (!re.empty())
            {
                int k = re.size();
                for (int j = 0; j < k; j++)
                {
                    if (v[i] == re[j].first)
                    {
                        f = 0;
                        re[j].second++;
                        break;
                    }
                }
            }
            if (f)
            {
                re.push_back({v[i], 0});
                co += 1;
            }
        }
        else
        {
            bool e = 1;
            int k = re.size();
            for (int j = 0; j < k; j++)
            {
                if (v[i] == re[j].first)
                {
                    e = 0;
                    re[j].second++;
                    break;
                }
            }
            if (e)
            {
                int mi = 100000;
                for (int j = 0; j < k; j++)
                {
                    mi = min(mi, re[j].second);
                }
                for (int j = 0; j < k; j++)
                {
                    if (re[j].second == mi)
                    {
                        re.erase(re.begin() + j);
                        re.push_back({v[i], 0});
                        break;
                    }
                }
            }
        }
    }
    sort(re.begin(), re.end(), cmp);
    int k = re.size();
    for (int i = 0; i < k; i++)
    {
        cout << re[i].first << " ";
    }
}