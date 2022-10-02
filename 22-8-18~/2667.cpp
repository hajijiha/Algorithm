#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int vis[26][26]={0,};
string arr[26];
int n;
int ca=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
vector <int> re;
void cal(int id,int ix){
	if(vis[id][ix]==1){
		return;
	}
	queue <pair<int,int>> q;
	vis[id][ix]=1;
	if(arr[id][ix]=='1'){
		ca+=1;
		q.push({id,ix});
		int co=1;
		while(!q.empty()){
			int a=q.front().first;
			int b=q.front().second;
			q.pop();
			for(int i=0;i<4;i++){
				int nx=a+dx[i];
				int ny=b+dy[i];
				if(0<=nx && nx<n && 0<=ny && ny<n){
					if(vis[nx][ny]==0){
						vis[nx][ny]=1;
						if(arr[nx][ny]=='1'){
							q.push({nx,ny});
							co+=1;
						}
					}
				}
			}	
		}
		re.push_back(co);
		return;
	}	
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	int i,a;
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cal(i,j);
		}
	}
	cout << ca <<"\n";
	sort(re.begin(),re.end());
	for(i=0;i<re.size();i++){
		cout << re[i]<<"\n";
	}
	
	
}
