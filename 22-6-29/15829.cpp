#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i;
	long long r=1;
	long long re=0;
	for(i=0;i<n;i++){
		re+=(s[i]-96)*r;
		r*=31;
		re%1234567891;
	}
	cout<< re;
}
