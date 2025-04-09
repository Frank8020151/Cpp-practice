#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int n, m, am[25];
double maxn;


double df(int a[]){
    int ma = 0, mi = 10, sum = 0;
    for(int i = 1;i<=m;i++){
        sum += a[i];
        ma = max(ma, a[i]);
        mi = min(mi, a[i]);
    }
    return (sum - ma - mi) * 1.0 / (m - 2);
}


int main(){
    cin>>n>>m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin>>am[j];
        }
        maxn = max(maxn, df(am));
    }
    cout<<fixed<<setprecision(2)<<maxn;
    return 0;
}