#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    bool a[101][101] = {};
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int b[101][101] = {};
    int maxn = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            b[i][j] = (min(min(b[i-1][j], b[i][j-1]), b[i-1][j-1])+1)*a[i][j];
            maxn = max(maxn, b[i][j]);
        }
    }
    cout<<maxn<<'\n';
    /*for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cout<<b[i][j]<<" \n"[j==m];
        }
    }
     */
    return 0;
}