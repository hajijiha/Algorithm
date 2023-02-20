#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	while(1){
		string s;
		getline(cin,s);
		if(s=="."){
			break;
		}
		stack <char> s1;
		int n=s.size();
		int tf=1;
		for(int i=0;i<n;i++){
			char c=s[i];
			if(c=='('||c=='['){
				s1.push(c);
			}
			else if(c==')'){
				if(!s1.empty()&&s1.top()=='('){
					s1.pop();
				}
				else{
					tf=0;
					break;
				}
			}
			else if(c==']'){
				if(!s1.empty()&&s1.top()=='['){
					s1.pop();	
				}
				else{
					tf=0;
					break;
				}
			}
		}
		if(tf==1 && s1.empty()){
			cout <<"yes\n";
		}
		else{
			cout <<"no\n";
		}
	}	
}
