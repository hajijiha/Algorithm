#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int factorial(int n){
	if(n==0){
		return 1;
	}
	if (n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n;
	cin >> n;
	int sum=factorial(n);
	cout << sum;
}
