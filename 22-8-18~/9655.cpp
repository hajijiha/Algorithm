#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
vector <ll> v;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >>  n;
	int m=n%4;
	m=m+4;
	if(m==4 || m==6){
		cout <<"CY";
	}
	else if(m==5 || 7){
		cout<<"SK";
	}
	
	
}
