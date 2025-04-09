#include <iostream>
using namespace std;
int n;
int a, b;
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a>>a>>b;
        if(a + b > 140 && a * 7 + b * 3 >= 800) cout<<"Excellent";
        else cout<<"Not excellent";
        cout<<'\n';
    }
    return 0;
}