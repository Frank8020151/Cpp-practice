#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct dot{
    double x, y;
};
dot dot1, dot2, dot3;


double dis(dot first, dot second){
    return sqrt((first.x - second.x) * (first.x - second.x) + (first.y - second.y) * (first.y - second.y));
}


int main(){
    cin>>dot1.x>>dot1.y>>dot2.x>>dot2.y>>dot3.x>>dot3.y;
    cout<<fixed<<setprecision(2)<<dis(dot1, dot2) + dis(dot1, dot3) + dis(dot2, dot3);
    return 0;
}