#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int arr[9]={0,};
bool visited[9]={0,};
int n;
void cal(int id){
	if(id==n){
		for(int i=0;i<n;i++){
			cout << arr[i]<<" ";
		}
		cout <<"\n";
		return ;
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
	cin >> n;
	cal(0);
	
}
