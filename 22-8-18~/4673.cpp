#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int arr[11000]={0,};
int cal(int val){
	if(val<10){
		return 2*val;
	}
	else if(10<=val&& val<100){
		int a=val/10;
		int b=val%10;
		return val+a+b;
	}
	else if(100<=val&& val<1000){
		int a=val/100;
		int b=val%100/10;
		int c=val%10;
		return val+a+b+c;
	}
	else if(1000<=val&& val<10000){
		int a=val/1000;
		int b=val%1000/100;
		int c=val%100/10;
		int d=val%10;
		return val+a+b+c+d;
	}
	else if(val==10000){
		return 10001;
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	for(int i=1;i<=10000;i++){
		int f=cal(i);
		arr[f]=1;
		
	}
	for(int i=1;i<=10000;i++){
		if(arr[i]==0){
			cout << i <<"\n";
		}
	}
	
}
