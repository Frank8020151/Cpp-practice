#include <iostream>
using namespace std;
int a[25][25];
int n;
int main(){
	cin>>n;
    a[1][1]=1;
	cout<<a[1][1]<<'\n';
	for(int i = 2;i<=n;i++){
		for(int j = 1;j<=i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			cout<<a[i][j]<<" \n"[j==i];
		}
	}
	
	return 0;
}
