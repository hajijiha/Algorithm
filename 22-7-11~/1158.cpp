#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n;
	cin >> m;
	int i;
	queue <int> q;
	for(i=1;i<=n;i++) {
		q.push(i);
	}
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<m-1;j++){
			q.push(q.front());
			q.pop();
		}
		if(i==0){
			if(n==1){
				cout <<"<"<<q.front()<<">";
				break;
			}
			cout <<"<"<<q.front()<<",";
			q.pop();
		}
		else if(i==n-1){
			cout <<" "<<q.front()<<">";
			q.pop();
		}
		else{
			cout<<" "<<q.front()<<",";
			q.pop();
		}
	}
}
