#include <iostream>
using namespace std;
int n;
string s;
bool c[105][10][8];
int main(){
	cin>>n>>s;
	for(int i = 0;i<=n;i++){
		for(int j = 1;j<=5;j++){
			for(int k = 1;k<=3;k++){
				c[i][j][k]=1;
			}
		}
	}
	for(int i = 0;i<n;i++){
		if(s[i]=='0'){
			c[i][2][2]=0;
			c[i][3][2]=0;
			c[i][4][2]=0;
		}
		if(s[i]=='1'){
			for(int j = 1;j<=5;j++){
				c[i][j][1]=0;
				c[i][j][2]=0;
			}
		}
		if(s[i]=='2'){
			c[i][2][1]=0;
			c[i][2][2]=0;
			c[i][4][2]=0;
			c[i][4][3]=0;
		}
		if(s[i]=='3'){
			c[i][2][1]=0;
			c[i][2][2]=0;
			c[i][4][1]=0;
			c[i][4][2]=0;
		}
		if(s[i]=='4'){
			c[i][1][2]=0;
			c[i][2][2]=0;
			c[i][4][1]=0;
			c[i][4][2]=0;
			c[i][5][1]=0;
			c[i][5][2]=0;
		}
		if(s[i]=='5'){
			c[i][2][2]=0;
			c[i][2][3]=0;
			c[i][4][2]=0;
			c[i][4][1]=0;
		}
		if(s[i]=='6'){
			c[i][2][2]=0;
			c[i][2][3]=0;
			c[i][4][2]=0;
		}
		if(s[i]=='7'){
			for(int j = 2;j<=5;j++){
				c[i][j][1]=0;
				c[i][j][2]=0;
			}
		}
		if(s[i]=='8'){
			c[i][2][2]=0;
			c[i][4][2]=0;
		}
		if(s[i]=='9'){
			c[i][2][2]=0;
			c[i][4][1]=0;
			c[i][4][2]=0;
		}
	}
	for(int i = 1;i<=5;i++){
		for(int j = 1;j<=n*4-1;j++){
			if(j%4==0){
				cout<<'.';
			}
			else{
				if(c[j/4][i][j%4]){
					cout<<'X';
				}
				else{
					cout<<'.';
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
