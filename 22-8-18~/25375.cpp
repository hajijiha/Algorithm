#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pll pair<ll, ll>
#define MOD 1000000007
#define lcm(a, b) a * b / gcd(a, b)
using namespace std;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };




int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t; cin >> t;
	while (t--) {
		ll a, b; cin >> a >> b;
		if (b%a==0 && b/a>=2) {
			cout << 1 << '\n';
		}
		else cout << 0 << '\n';
		
	}
}
