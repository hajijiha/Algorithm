#include <bits/stdc++.h>

using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	string s1;
	getline(cin,s1);
	int n=s1.size();
	int i;
	int count=0;
	char c[4]={'U','C','P','C'};
	for(i=0;i<n;i++){
		if(s1[i]==c[count]){
			count++;
			if(count==4){
				break;
			}
		}
	}
	if(count==4){
		cout <<"I love UCPC";
	}
	else{
		cout<<"I hate UCPC";
	}

}
