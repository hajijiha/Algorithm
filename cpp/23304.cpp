#include <bits/stdc++.h>
using namespace std;
string s;
int cal(string s, int size);
int val=1;
int main() {
	cin.tie(0);
	cout.tie(0);
	cin >> s;
	int n=s.size();
	cal(s,n);
	if(val==1){
		cout <<"AKARAKA";
	}
	else{
		cout <<"IPSELENTI";
	}

}
int cal(string s, int size){
	int i;
	if(size==1){
		return val;
	}
	else{
		for(i=0;i<size;i++){
			if(s[i]!=s[size-1-i]){
				val=0;
			}
		}
		return cal(s,size/2);
	}

}
