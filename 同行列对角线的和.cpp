#include <bits/stdc++.h>
using namespace std;
int n, x, y;
int main(){
	cin>>n>>x>>y;
	for(int j = 1;j<=n;j++){
		cout<<'('<<x<<','<<j<<") ";
	}
	cout<<'\n';
	for(int i = 1;i<=n;i++){
		cout<<'('<<i<<','<<y<<") ";
	}
	cout<<'\n';
	int i=x, j=y;
	while(i>=1&&j>=1){
		i--;
		j--;
	}
	i++;
	j++;
	for(;i<=n&&j<=n;i++,j++){
		cout<<'('<<i<<','<<j<<") ";
	}
	cout<<'\n';
	i=x, j=y;
	while(i<=n&&j>=1){
		i++;
		j--;
	}
	i--;
	j++;
	for(;i>=1&&j<=n;i--,j++){
		cout<<'('<<i<<','<<j<<") ";
	}
	return 0;
}
