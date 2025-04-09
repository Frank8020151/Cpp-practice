#include <iostream>
#include <list>
using namespace std;
list<int> li;

int main(){
    li.push_back(1);
    int q;
    cin>>q;
    while(q--){
        int choose, x, y;
        cin>>choose>>x;
        if(choose == 1){
            cin>>y;
            for(auto iter = li.begin();iter != li.end();iter++){
                if(*iter == x){
                    li.insert(++iter, y);
                    break;
                }
            }
        }
        else if(choose == 2){
            for(auto iter = li.begin();iter != li.end();iter++){
                if(*iter == x){
                    if((++iter) != li.end()) {
                        cout << *(iter)<<endl;
                    }
                    else{
                        cout<<0<<endl;
                    }
                    break;
                }
            }
        }
        else{
            for(auto iter = li.begin();iter != li.end();iter++){
                if(*iter == x){
                    if(iter != li.end()) {
                        li.erase(++iter);
                    }
                    break;
                }
            }
        }
    }
    return 0;
}