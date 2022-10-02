#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int co=0;
int n,m;
int ca=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int arr[1001][1001];
queue <pair<int,int>> q;
void bfs(void){
	while(!q.empty()){
		int y=q.front().first;
		int x=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int ny=y+dy[i];
			int nx=x+dx[i];
			if(1<=nx&&nx<=n&&1<=ny&&ny<=m){
				if(arr[ny][nx]==0){
					arr[ny][nx]=arr[y][x]+1;
					q.push({ny,nx});
				}
			}
		}
		
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n>>m;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin >> arr[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j]==1){
				q.push({i,j});
			}
		}
	}
	bfs();
	int re=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(arr[i][j]==0){
				cout <<"-1";
				return 0;
			}
			else if(re<arr[i][j]){
				re=arr[i][j];
			}
		}
	}
			cout <<re-1;

}
