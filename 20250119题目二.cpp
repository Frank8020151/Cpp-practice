#include <iostream>
using namespace std;
int main(){
    int a[10005] = {};
    int change[10005] = {};
    int n;
    cin>>n;
    int k = 0;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
        if(a[i] > a[i-1]) change[k++] = 1;
        else if(a[i] < a[i-1]) change[k++] = -1;
    }
    int cnt = 0;
    for(int i = 2;i<k;i++){
        if(change[i] == 1 && change[i-1] == -1) cnt++;
    }
    cout<<cnt;
    return 0;
}