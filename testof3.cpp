#include <iostream>
using namespace std;
int main(){
    long long cnt = 1;
    for(int i = 1;i<=50;i++){
        cnt *= 2;
        long long cntc = cnt;
        int len = 0;
        while(cntc){
            cntc /= 10;
            len++;
        }
        cout<<len<<' ';
    }
    return 0;
}