#include <iostream>
using namespace std;
int n;
char a[15][15], ed[15][15];
bool check(){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(a[i][j] != ed[i][j]){
                return false;
            }
        }
    }
    return true;
}
void r90(){
    char temp[15][15];
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            temp[i][j] = a[j][n - i + 1];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            a[i][j] = temp[i][j];
        }
    }
}
void pq(){
    char temp[15][15];
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            temp[i][j] = a[i][n - j + 1];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            a[i][j] = temp[i][j];
        }
    }
}
int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin>>ed[i][j];
        }
    }
    r90();
    if(check()){
        cout<<3;
        return 0;
    }
    r90();
    if(check()){
        cout<<2;
        return 0;
    }
    r90();
    if(check()){
        cout<<1;
        return 0;
    }
    r90();
    pq();
    if(check()){
        cout<<4;
        return 0;
    }
    for(int i = 1;i<=3;i++){
        r90();
        if(check()){
            cout<<5;
            return 0;
        }
    }
    r90();
    pq();
    if(check()){
        cout<<6;
        return 0;
    }
    cout<<7;
    return 0;
}