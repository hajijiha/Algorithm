#include <bits/stdc++.h>

using namespace std;
int n, a, b;
int cnt[1001];
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		for (int i = a; i <= b; i++) cnt[i]++;
	}
	for (int i = 1000; i >= 0; i--)
	{
		if (cnt[i] == i)
		{
			cout << i << '\n';
			return 0;
		}
	}
	cout << -1 << '\n';
	return 0;
}
