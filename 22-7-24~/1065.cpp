#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n;
	cin >> n;
	int i,j;
	int co=0;
	for(i=1;i<=n;i++){
		if(i==1000){
			continue;
		}
		if(i>=100){
			int a=i%10;
			int b=i/10%10;
			int c=i/100;
			if(2*b==a+c){
				co++;
			}
		}
		else{
			co++;
		}
	}
	cout << co;	
	
}
