#include <iostream>
#include <cmath>
using namespace std;
int n;
struct STUDENT{
    int c, m, e;
}a[1005];
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i].c>>a[i].m>>a[i].e;
    }
    int cnt = 0;
    for(int i = 1;i<=n;i++){
        for(int j = i + 1;j<=n;j++){
            if(abs(a[i].c - a[j].c) <= 5 && abs(a[i].e - a[j].e) <= 5 && abs(a[i].m - a[j].m) <= 5 && abs(a[i].m + a[i].e + a[i].c - a[j].c - a[j].e - a[j].m) <= 10){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}