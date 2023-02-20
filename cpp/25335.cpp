#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define pll pair<ll, ll>
#define lcm(a, b) a * b / gcd(a, b)
using namespace std;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int r = 0, b = 0, g = 0;
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a, c;
		cin >> a >> c;
	}
	for (int i = 0; i < m; i++) {
		int a, c;
		char x;
		cin >> a >> c >> x;
		if (x == 'R') r++;
		else if (x == 'B')b++;
		else if (x == 'G')g++;
	}
	int cnt=0;
	while (r != 0 && b != 0) {
		cnt++;
		if(g>0){
			g-=1;
			continue;
		}
		if(cnt%2==1&&r>0){
			r-=1;
		}
		else if(cnt%2==0 && b>0){
			b-=1;
		}
		
	}
	if(r==0){
		cout <<"jhnan917";
	}
	else if(b==0){
		cout <<"jhnah917";
	}

}
