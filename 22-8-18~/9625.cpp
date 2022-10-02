#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
int arr[46];
int brr[46];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >>  n;
	arr[1]=0;
	arr[2]=1;
	brr[1]=1;
	brr[2]=1;
	for(int i=3;i<=n;i++){
		brr[i]=brr[i-1]+arr[i-1];
		arr[i]=brr[i-1];
	}
	cout << arr[n]<<" "<<brr[n];
	
}
