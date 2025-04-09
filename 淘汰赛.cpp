#include <iostream>
#include <cmath>
using namespace std;
struct Node{
    int value;
    int pos;
};
int n;
Node a[130];
int main(){
    cin>>n;
    int width = pow(2, n);
    for(int i = 1;i<=width;i++){
        cin>>a[i].value;
        a[i].pos = i;
    }
    while(width != 2){
        width /= 2;
        for(int i = 1;i<=width;i++){
            if(a[i*2-1].value > a[i*2].value){
                a[i] = a[i*2-1];
            }
            else{
                a[i] = a[i*2];
            }
        }
        /*
        for(int i = 1;i<=width;i++){
            cout<<a[i].pos<<' ';
        }
        cout<<endl;
         */
    }
    if(a[1].value > a[2].value){
        cout<<a[2].pos;
    }
    else{
        cout<<a[1].pos;
    }
    return 0;
}