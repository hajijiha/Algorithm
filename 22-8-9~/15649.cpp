#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n,m;
int arr[9]={0,};
bool visited[9]={0,};
void cal(int id){
	if(id==m){
		for(int i=0;i<m;i++){
			cout << arr[i]<<" ";
		}
		cout <<"\n";
	}
	else{
		for(int i=1;i<=n;i++){
			if(!visited[i]){
				visited[i]=true;
				arr[id]=i;
				cal(id+1);
				visited[i]=false;
			}
		}
	}
	
	
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n >> m;
	cal(0);
	
	
}
