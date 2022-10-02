#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n,m;
vector <int> arr;
int val[9]={0,};
int st;
bool visited[9]={0,};
void cal(int co,int id){
	if(id==m){
		for(int i=0;i<m;i++){
			cout << val[i]<<" ";
		}
		cout <<"\n";
	}
	else{
		for(int i=co;i<n;i++){
			if(!visited[i]){
				visited[i]=true;
				val[id]=arr[i];
				cal(i+1,id+1);
				visited[i]=false;
			}		
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n >> m;
	int a;
	for(int i=0;i<n;i++){
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	cal(0,0);
}
