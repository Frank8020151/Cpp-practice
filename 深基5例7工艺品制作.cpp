#include <iostream>
using namespace std;
int a, b, h, x1, x2, y1, y2, z1, z2, p;
int v[25][25][25];
int main(){
    cin>>a>>b>>h>>p;
    while(p--){
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for(int i = x1;i<=x2;i++){
            for(int j = y1;j<=y2;j++){
                for(int k = z1;k<=z2;k++){
                    v[i][j][k] = 1;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=b;j++){
            for(int k = 1;k<=h;k++){
                cnt += !v[i][j][k];
            }
        }
    }
    cout<<cnt;
    return 0;
}