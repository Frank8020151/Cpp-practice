#include <bits/stdc++.h>
using namespace std;
int l, m, u, v;
bool a[10005];
int main(){
    cin>>l>>m;
    for(int i = 1;i<=m;i++){
        cin>>u>>v;
        for(int j = u;j<=v;j++){
            a[j] = 1;
        }
    }
    int cnt = 0;
    for(int i = 0;i<=l;i++){
        cnt += a[i];
    }
    cout<<l - cnt + 1;
    return 0;
}