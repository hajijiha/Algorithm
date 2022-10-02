#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll arr[101][101];
ll dp[101][101]={0,};
ll visited[101][101];
ll dx[]={0,0,1,-1};
ll dy[]={1,-1,0,0};
ll n,m;
queue <pair<ll,ll>> q;
void bfs(ll y,ll x){
	visited[y][x]=1;
	q.push({y,x});
	dp[y][x]++;
	while(!q.empty()){
		ll ex=q.front().second;
		ll ey=q.front().first;
		q.pop();
		for(ll i=0;i<4;i++){
			ll nx=ex+dx[i];
			ll ny=ey+dy[i];
			if(nx>=0 && nx<m && ny>=0 && ny<n){
				if(visited[ny][nx]==0&&arr[ny][nx]==1){
					visited[ny][nx]=1;
					q.push({ny,nx});
					dp[ny][nx]=dp[ey][ex]+1;
				}
			}
		
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n >> m;
    for (ll i=0; i<n; i++){            

        string row;                     
        cin >> row;

        for (ll j=0; j<m; j++){        
            arr[i][j] = row[j]-'0';    
        }
    }
	bfs(0,0);

		cout <<dp[n-1][m-1];
	}

