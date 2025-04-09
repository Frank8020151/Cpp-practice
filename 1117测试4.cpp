#include <iostream>
#include <algorithm>
using namespace std;
int n;
int m;
int x;
int a[105];
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>x;
        bool flag = 1;
        for(int j = 1;j<i;j++){
            if(x == a[j]){
                flag = 0;
            }
        }
        if(flag){
            m++;
            a[m] = x;
        }
    }
    cout<<m<<endl;
    sort(a+1, a+1+m);
    for(int i = 1;i<=m;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}