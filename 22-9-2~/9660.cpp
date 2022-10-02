#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int co=0;
ll n,m;
int ca=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int arr[3]={1,3,4};
int dp[17];
priority_queue <int> q;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	ll f=n%7;
	if(f==0){
		cout << "CY";
	}
	else if(f==2){
		cout <<"CY";
	}
	else{
		cout <<"SK";
	}
	
}
