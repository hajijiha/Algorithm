#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
int arr[100001]={0,};
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	arr[2]=1;
	arr[5]=1;
	if(n==1 || n==3){
		cout<<"-1";
	}
	else{
		arr[4]=2;
		for(int i=6;i<=n;i++){
			if(arr[i]==0){
				if(i==6){
					arr[i]=arr[i-2]+1;
				}
				else if(i==8){
					arr[i]=arr[i-2]+1;
				}
				else{
					arr[i]=min(arr[i-2],arr[i-5])+1;;
				}
			}
		}
		cout << arr[n];
	}
}
