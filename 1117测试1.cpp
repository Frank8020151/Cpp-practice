#include <bits/stdc++.h>
using namespace std;
int n;
string p, max_p;
int max_i;
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>p;
        if(p.length() > max_p.length()){
            max_p = p;
            max_i = i;
        }
        else if(p.length() == max_p.length() && p > max_p){
            max_p = p;
            max_i = i;
        }
    }
    cout<<max_i<<endl<<max_p;
    return 0;
}