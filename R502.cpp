#include <iostream>
using namespace std;
int a[10][10], n, m;
int main(){
	for(int i = 1;i<=5;i++){
		for(int j = 1;j<=5;j++){
			cin>>a[i][j];//������� 
		}
	}
	cin>>n>>m;//���뽻����n,m 
	swap(a[n], a[m]);//���� 
	for(int i = 1;i<=5;i++){
		for(int j = 1;j<=5;j++){
			cout<<a[i][j]<<" \n"[j==5];//������� 
		}
	}
	return 0;
}
