#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	int n,i;
	cin >> n;
	for(i=1;i<=n;i++){
		int a;
		cin >> a;
		vector <int> v;
		for(int j=0;j<a;j++){
			int b;
			cin >>b;
			v.push_back(b);
		}
		reverse(v.begin(),v.end());
		int ma=v[a-1];
		int mi=v[0];
		int ma2=0;
		int mi2=1000000;
		for(i=0;i<a-1;i++){
			int w=v[i]-v[i+1];
			ma2=max(ma2,w);
			mi2=min(mi2,w);
		}
		cout << "Class "<<i<<"\n";
		cout <<"Max "<<ma2<<", Min "<<mi2<<", Largest gap "<<ma-mi<<"\n";
	}
}
