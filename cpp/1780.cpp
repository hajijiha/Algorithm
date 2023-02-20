#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int arr[2188][2188];
int output[3];
int st;
int n;
void cal(int x, int y, int size){
		for (int i = x; i < x + size; i++)
		for (int j = y; j < y + size; j++)
		{
			if (arr[i][j] != arr[x][y])
			{
				cal(x, y, size / 3);
				cal(x + size * 1 / 3, y, size / 3);
				cal(x + size * 2 / 3, y, size / 3);
				cal(x, y + size * 1 / 3, size / 3);
				cal(x + size * 1 / 3, y + size * 1 / 3, size / 3);
				cal(x + size * 2 / 3, y + size * 1 / 3, size / 3);
				cal(x, y + size * 2 / 3, size / 3);
				cal(x + size * 1 / 3, y + size * 2 / 3, size / 3);
				cal(x + size * 2 / 3, y + size * 2 / 3, size / 3);
				return;
			}
		}
	output[arr[x][y] + 1]++;
	return;
		
		
	}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
	cin >> n;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> arr[i][j];
		}
	}
	cal(0,0,n);
	cout <<output[0]<<"\n"<<output[1]<<"\n"<<output[2];
}
