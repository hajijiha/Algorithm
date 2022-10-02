#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b){
	return a>b;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	if(k>=3){
		int f= (m+k-3)%n;
		if(f==0){
			cout << n;
		}
		else{
			cout << f;
		}
	}
	else{
		int f=k-3;
		while(f<0){
			f+=n;
			f%=n;
		}
		if((m+f)%n==0){
			cout << n;
		}
		else{
			cout <<(m+f)%n;
		}
	}

}
