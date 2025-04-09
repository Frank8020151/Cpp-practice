#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    char a[55][55]={};
    int cntw[55]={};
    int cntb[55]={};
    int cntr[55]={};
    string s;
    for(int i = 1;i<=n;i++){
        cin>>s;
        for(int j = 0;j<m;j++) {
            if (s[j] == 'W') cntw[i]++;
            if (s[j] == 'B') cntb[i]++;
            if (s[j] == 'R') cntr[i]++;
        }
        cntw[i] += cntw[i-1];
        cntb[i] += cntb[i-1];
        cntr[i] += cntr[i-1];
    }
    int minn = 2500;
    for(int i = 1;i<=n-2;i++){
        for(int j = i+2;j<=n;j++){
            minn = min(minn, cntb[i]+cntr[i]+cntw[j-1]-cntw[i]+cntr[j-1]-cntr[i]+cntw[n]-cntw[j-1]+cntb[n]-cntb[j-1]);
        }
    }
    cout<<minn;
    return 0;
}