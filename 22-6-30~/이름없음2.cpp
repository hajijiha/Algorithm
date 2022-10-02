#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	long long sum=0;
	int i;
	for(i=1;i<=1000000;i++){
		sum+=(1000000)/i;
	}
	cout <<sum;
}
