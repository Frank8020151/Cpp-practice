#include <iostream>
using namespace std;
int n, cnt = 1, x, y = 1;
int a[100][100];
int dx[5]={1, 0, -1, 0}, dy[5]={0, 1, 0, -1};
int main(){
    int l = 0;
    cin>>n;
    x = n;
    for(int i = 1;i<=n;i++){
        a[1][i]=cnt;
        cnt++;
    }
    l++;
    int cnt2 = n-1;
    for(int i = 1;i<=n-1;i++){
        for(int k = 1;k<=2;k++){
            for(int j = 1;j<=cnt2;j++){
                x += dx[l];
                y += dy[l];
                a[y][x] = cnt;
                cnt++;
            }
            l++;
            l %= 4;

        }
        cnt2--;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j]/10) cout<<" ";
            else cout<<"  ";
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}