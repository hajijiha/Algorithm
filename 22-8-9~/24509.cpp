#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second==b.second){
		return a.first<b.first;
	}
	else{
		return a.second>b.second;
	}
}
int n;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	vector <pair<int,int>>k;
	vector <pair<int,int>>e;
	vector <pair<int,int>>m;
	vector <pair<int,int>>s;
	int a;
	int b;
	int c;
	int d;
	int w;
	for(int i=0;i<n;i++){
		cin >> a >> b >> c >> d >> w;
		k.push_back({a,b});
		e.push_back({a,c});
		m.push_back({a,d});
		s.push_back({a,w});
	}
	int co;
	int co1;
	int co2;
	int co3;
	sort(k.begin(),k.end(),cmp);
	sort(e.begin(),e.end(),cmp);
	sort(m.begin(),m.end(),cmp);
	sort(s.begin(),s.end(),cmp);
	for(int i=0;i<n;i++){
			co=k[i].first;
			break;
	}
	cout <<co<<" ";
	for(int i=0;i<n;i++){
		if(e[i].first!=co){
			co1=e[i].first;
			break;
		}
	}
	cout <<co1<<" ";
	for(int i=0;i<n;i++){
		if(m[i].first!=co&&m[i].first!=co1){
			co2=m[i].first;
			break;
		}
	}
	cout <<co2<<" ";
	for(int i=0;i<n;i++){
		if(s[i].first!=co&&s[i].first!=co1&&s[i].first!=co2){
			co3=s[i].first;
			break;
		}
	}
	cout <<co3;
	
}
