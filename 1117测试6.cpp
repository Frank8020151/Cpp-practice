#include <bits/stdc++.h>
using namespace std;
int n;
string s[25];
bool cmp(string x, string y){
    int xlen = x.length(), ylen = y.length();
    int mlen = min(xlen, ylen);
    for(int i = 0;i<mlen;i++){

    }
}
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>s[i];
    }
    sort(s+1, s+n+1, cmp);
    for(int i = n;i>=1;i--){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}