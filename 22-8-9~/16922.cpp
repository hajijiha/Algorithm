#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
set <int> s;
int arr[4]={1,5,10,50};
bool visited[1001]={0,};
int cnt=0;
void cal(int co,int id,int total){
	if(id==n){
		if(visited[total]==false){
			visited[total]=true;
			cnt ++;
		}
	}
	else{
		for(int i=co;i<4;i++){
				cal(i,id+1,total+arr[i]);
		
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >>n;
	cal(0,0,0);
	cout << cnt;
	
	
	
}
