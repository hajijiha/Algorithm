#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int co=0;
int n,m;
int ca=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int arr[100001];
queue <int> q;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n>>m;
	q.push(n);
	while(!q.empty()){
		int x=q.front();
		q.pop();
		if(0<=x-1){
			if(arr[x-1]==0&&x-1!=n){
				arr[x-1]=arr[x]+1;
				q.push(x-1);
			}
			else{
				arr[x-1]=min(arr[x-1],arr[x]+1);
			}
		}
		 if(2*x<=100000){
				if(arr[2*x]==0&&2*x!=n){
					arr[2*x]=arr[x]+1;
					q.push(2*x);
				}
				else{
					arr[2*x]=min(arr[2*x],arr[x]+1);
				}

			}
			if(x+1<=100000){
				if(arr[x+1]==0&&x+1!=n){
					arr[x+1]=arr[x]+1;
					q.push(x+1);
				}
				else{
					arr[x+1]=min(arr[x+1],arr[x]+1);
				}
			}
		
	}
	cout << arr[m];
	
}
