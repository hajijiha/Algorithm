#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n;
bool cmp(int a, int b){
	return a>b;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	string s;
	int ma=0;
	for(int i=0;i<n;i++){
		cin >> s;
		int sum=0;
		int m=s.size();
		for(int j=0;j<m-2;j++){
			if(s.substr(j,3)=="for"){
				sum+=1;
			}
		}
		for(int j=0;j<m-4;j++){
			 if(s.substr(j,5)=="while"){
				sum++;
			}
		}
		ma=max(ma,sum);
	}
	cout << ma;
	
}
