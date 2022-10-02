#include <bits/stdc++.h>
using namespace std;
int n;
int queen[15];
int co=0;
void cal(int idx){
	if(idx==n){
		co+=1;
		return;
	}
	int i;
	int j;
	for(i=0;i<n;i++){
		bool flag=1;
		for(j=0;j<idx;j++){
			if(i==queen[j] || abs(queen[j]-i)==idx-j){
				flag=0;
				break;
			}
		}
		if(flag==1){
			queen[idx]=i;
			cal(idx+1);
		}
	}
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> n;
	cal(0);
	cout << co;
	
}
