#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n,m;
int arr[9]={0,};
bool visited[9]={0,};
void cal(int co,int id){
	if(id==m){
		for(int i=0;i<m;i++){
			cout << arr[i]<<" ";
		}
		cout <<"\n";
		return;
	}
	else{
		for(int i=co;i<=n;i++){
				arr[id]=i;
				cal(i,id+1);		
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n >> m;
	cal(1,0);
}
