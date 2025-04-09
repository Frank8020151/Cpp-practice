#include <iostream>
using namespace std;
int a[10][10], n, m;
int main(){
	for(int i = 1;i<=5;i++){
		for(int j = 1;j<=5;j++){
			cin>>a[i][j];//输入矩阵 
		}
	}
	cin>>n>>m;//输入交换行n,m 
	swap(a[n], a[m]);//交换 
	for(int i = 1;i<=5;i++){
		for(int j = 1;j<=5;j++){
			cout<<a[i][j]<<" \n"[j==5];//输出矩阵 
		}
	}
	return 0;
}
