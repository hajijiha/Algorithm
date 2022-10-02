#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int n;
	cin >>n;
	vector <char> a;
	vector <char> b;
	vector <char> c;
	vector <char> d;
	char e;
	char ch[2];
	char ch2[2];
	char f[5]={'a','e','i','o','u'};
	for(int i=0;i<n;i++){
		cin >> e;
		bool t=1;
		if(i==0 ){
			ch[0]=e;
		}
		if(i==n-1 ){
			ch[1]=e;
		}
		for(int j=0;j<5;j++){
			if(e==f[j]){
				t=0;
				c.push_back(e);
				
			}
		}
		if(t){
			a.push_back(e);	
		}
	}
	for(int i=0;i<n;i++){
		cin >> e;
		bool t=1;
		if(i==0 ){
			ch2[0]=e;
		}
		if(i==n-1 ){
			ch2[1]=e;
		}
		for(int j=0;j<5;j++){
			if(e==f[j]){
				t=0;
				d.push_back(e);
			}
		}
		if(t){
			b.push_back(e);
		}
	}
	if(ch[0]==ch2[0]&&ch[1]==ch2[1]){
		char f;
		 int co=0;
		 int co1=0;
		 sort(c.begin(),c.end());
		 sort(d.begin(),d.end());
		for(int i=0;i<min(a.size(),b.size());i++){
			if(a[i]==b[i]){
				co+=1;
			}
		}
		for(int i=0; i<min(c.size(),d.size());i++){
			if(c[i]==d[i]){
				co1+=1;
			}
		}
		if(co+co1==n){
			cout <<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}
}
