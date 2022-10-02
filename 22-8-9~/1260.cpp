#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n,m,st;
int arr[1001][1001];
bool visited[1001];
queue<int> q;
void dfs(int st){
	visited[st]=true;
	cout << st<<" ";
	for(int i=1;i<=n;i++){
		if(arr[st][i]==1&&visited[i]==0){
			dfs(i);
		}
	}
}
void bfs(int st){
	q.push(st);
	visited[st]=true;
	cout << st<<" ";
	while(!q.empty()){
		st=q.front();
		q.pop();
		for(int i=1;i<=n;i++){
			if(arr[st][i]==1 && visited[i]==0){
				q.push(i);
				visited[i]=true;
				cout << i <<" ";
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n >> m >> st;
	int a,b;
	for(int i=0;i<m;i++){
		cin >> a>>b;
		arr[a][b]=1;
		arr[b][a]=1;
	}
	for(int i=1;i<=n;i++){
		visited[i]=0;
	}
	dfs(st);
	cout <<"\n";
	for(int i=1;i<=n;i++){
		visited[i]=0;
	}
	bfs(st);
	
}



