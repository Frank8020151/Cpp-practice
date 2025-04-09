#include <iostream>
using namespace std;
int n, m;
int main(){
    cin>>n>>m;
    /*
     t = n - j
     j = (4n - m)/2

     */
    double j = (4*n - m) / 2.0;
    if(j==(int)j && j >= 0 && n - j >= 0){
        cout<<j<<' '<<n - j;
    }
    else{
        cout<<"No answer";
    }
    return 0;
}