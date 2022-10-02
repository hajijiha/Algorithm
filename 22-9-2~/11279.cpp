#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int co=0;
int n,m;
int ca=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int arr[100001];
priority_queue <int> q;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	int a;
	while(n--){
		cin >> a;
		if(a==0){
			if(q.empty()){
				cout <<'0'<<"\n";
			}
			else{
				cout << q.top()<<"\n";
				q.pop();
			}
		}
		else if(a>0){
			q.push(a);
		}
	}
}
