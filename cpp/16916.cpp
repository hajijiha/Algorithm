#include <bits/stdc++.h>
using namespace std;
vector <int> fail(string pattern){
	int n=pattern.size();
	int j=0,i=1;
	vector <int> table(n,0);
	for(i;i<n;i++){
		while(j>0 && pattern[i]!=pattern[j]){
			j=table[j-1];
		}
		if(pattern[i]==pattern[j]){
			table[i]=++j;
		}
	}
	return table;
}
int kmp(string text,string pattern){
	vector <int> table=fail(pattern);
	int i=0,j=0;
	int n=text.size();
	int m=pattern.size();
	for(i;i<n;i++){
		while(j>0&&text[i]!=pattern[j]){
			j=table[j-1];
		}
		if(text[i]==pattern[j]){
			if(j==m-1){
				return 1;
			}
			else{
				j++;
			}
		}
	}
	if(i==n){
		return 0;
	}
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	string text;
	cin >> text;
	string pattern;
	cin >> pattern;
	int f=kmp(text,pattern);
	if(f){
		cout<<"1";
	}
	else{
		cout <<"0";
	}
	
	
	
	
}

