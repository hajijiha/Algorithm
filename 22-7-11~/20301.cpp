#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	int n,m,k;
	cin >> n;
	cin >> m;
	cin >> k;
	int i;
	int j;
	deque <int> q;
	for(i=1;i<=n;i++) {
		q.push_back(i);
	}
	for(i=1;i<=n;i++){
		for(j=0;j<m-1;j++){
			int a =q.front();
			q.push_back(a);
			q.pop_front();
		}
		cout << q.front()<<"\n";
		q.pop_front();
		if(i%k==0){
			reverse(q.begin(),q.end());
		}
	}
}
