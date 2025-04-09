#include <iostream>
#include <list>
using namespace std;
list<int> a;
int main(){
    int n, k;
    bool p;
    cin>>n;
    a.push_back(1);
    for(int i = 2;i<=n;i++){
        cin>>k>>p;
        for(auto iter = a.begin();iter != a.end();iter++){
            if(*iter == k){
                if(p){
                    a.insert(++iter, i);
                }
                else{
                    a.insert(iter, i);
                }
                break;
            }
        }
    }
    /*
    for(auto iter = a.begin();iter != a.end();iter++){
        cout<<*iter<<' ';
    }
     */
    int m, x;
    cin>>m;
    for(int i = 1;i<=m;i++){
        cin>>x;
        for(auto iter = a.begin();iter != a.end();iter++){
            if(*iter == x){
                a.erase(iter);
                break;
            }
        }
    }

    for(auto iter = a.begin();iter != a.end();iter++){
        cout<<*iter<<' ';
    }

    return 0;
}