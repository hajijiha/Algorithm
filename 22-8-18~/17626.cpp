#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
long long arr[51000]={0,};
long long val[225];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	arr[1]=1;
	for(ll i=1;i<=225;i++){
		arr[i*i]=1;	}
	for(ll i=1;i<=50000;i++){
		
		for(ll j=1;j<=224;j++){
			if(i+j*j<=50000){
				if(arr[i+j*j]==0){
					arr[i+j*j]=arr[i]+1;
				}
				else{
					arr[i+j*j]=min(arr[i]+1,arr[i+j*j]);
				}

				
			}
		}
	}
	cout <<arr[n];


	
}
