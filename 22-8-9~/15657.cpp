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
				val[id]=arr[i];
				cal(i,id+1);
		
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
