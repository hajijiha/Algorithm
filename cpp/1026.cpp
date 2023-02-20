#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b){
	return a>b;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	int i,j,n;
	cin >> n;
	vector <int> a;
	vector <int> b;
	int c;
	for(i=0;i<n;i++){
		cin >> c;
		a.push_back(c);
	}	
	for(i=0;i<n;i++){
		cin >> c;
		b.push_back(c);
	}
	int sum=0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),cmp);
	for(i=0;i<n;i++){
		sum+=a[i]*b[i];
	}
	cout << sum;

}
