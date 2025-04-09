#include <iostream>
#include <cmath>
using namespace std;
double n, x, y;
int main(){
    cin>>n>>x>>y;
    cout<<n-ceil(y/x);
    return 0;
}