#include <iostream>
#include <iomanip>
using namespace std;
long double a, b;
int main(){
    cin>>a>>b;
    cout<<fixed<<setprecision(6)<<(a/b - (int)(a/b)) * b;
    return 0;
}