#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int i,j;
	int r ,c;
	cin >> r >> c;
	set <string> s;
	int count=1;
	vector <string> arr;
	for(i=0;i<r;i++){
		string w;
		cin >> w;
		arr.push_back(w);
	}
	int mid=0;
	int st=0;
	int end=r;
	while(st<=end){
		set <string> s;
		int f=0;
		mid=(st+end)/2;
		for(j=0;j<c;j++){
			string k=" ";
			for(i=mid;i<r;i++){
				k+=arr[i][j];
			}
			s.insert(k);
		}
		f=s.size();
		if(f==c){
				st=mid+1;
		}
		else{
			if(st==mid){
				count=0;
			}
			end=mid-1;
		}
	}
	if(count){
		cout << mid;
	}
	else{
		cout << mid-1;
	}
	
	
	
}
