#include <iostream>
using namespace std;
int n;
bool a[5005];
int main(){
	cin>>n;
	for(int i = 2;i<=n;i++){
		for(int k = i;k<=n;k+=i){
			a[k]=!a[k];
		}
	}
	for(int i = 1;i<=n;i++){
		if(!a[i]){
			cout<<i<<' ';
		} 
	}
	return 0;
}
