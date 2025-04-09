#include <iostream>
#include <algorithm>
using namespace std;
double a, b, c;
int cnt = 0;
int s[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
void check(){
    double first = s[0]*100 + s[1]*10 + s[2], second = s[3]*100 + s[4]*10 + s[5], third = s[6]*100 + s[7]*10 + s[8];
    //double one = first / a;
    if(second * a == first * b && third * a == first * c){
        cnt++;
        cout<<first<<' '<<second<<' '<<third<<endl;
    }
}
int main(){
    cin>>a>>b>>c;
    while(next_permutation(s, s+9)) check();
    if(cnt == 0) cout<<"No!!!";
    return 0;
}