#include <bits/stdc++.h>
using namespace std;
int n;
int arr[21][21];
vector <int> v;
vector <int> re;
void cal(){
	int i,j;
	long long sum1=0;
	long long sum2=0;
	for(i=1;i<=n/2;i++){
		for(j=1;j<=n/2;j++){
			sum1+=arr[i][j];
		}
	}
	for(i=n/2+1;i<=n;i++){
		for(j=n/2+1;j<=n;j++){
			sum2+=arr[i][j];
		}
	}
	re.push_back(abs(sum1-sum2));
}
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	cin >> n;
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			int a;
			cin >> a;
			arr[i][j]=a;
		}
	}
	for(i=1;i<=n;i++){
		v.push_back(i);
	}
	do{
		cal();
	}
	while(next_permutation(v.begin(),v.end()));
	int f=re.size();
	 int mi=99999999;
	for(i=0;i<f;i++){
		mi=min(mi,re[i]);
	}
	cout << mi;
}
