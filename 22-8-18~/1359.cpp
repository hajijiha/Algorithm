#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector <pair<ll,ll>> v;
vector <pair<ll,ll>> s;
long long cal(int a,int b)
{
    int c=1;
    int d=1;
    while(b>0)
    {
        c*=a--;
        d*=b--;
    }
    return c/d;
}

int main(){
	int n,m,k;
	cin >> n >> m >> k;
double val=0;
 double re=cal(n,m);
	while(m>=k){
		val+=cal(m,k)*cal(n-m,m-k);
		k+=1;
	}
	printf("%.16f",val/re);

}
