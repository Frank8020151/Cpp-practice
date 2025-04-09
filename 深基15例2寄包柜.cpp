#include <iostream>
#include <vector>

using namespace std;
struct Node{
    int a;
    int b;
};
vector<Node> key;
vector<int> value;
int main(){
    int n, q, choose;
    cin>>n>>q;
    while(q--){
        int i, j;
        cin>>choose;
        cin>>i>>j;
        if(choose == 1){
            int k;
            cin>>k;
            auto iter2 = value.begin();
            for(auto iter1 = key.begin();iter1 != key.end();iter1++, iter2++){
                if((*iter1).a == i && (*iter1).b == j){
                    *iter2 = k;
                    goto b;
                }
            }
            key.push_back({i, j});
            value.push_back(k);
        }
        else{
            auto iter2 = value.begin();
            for(auto iter1 = key.begin();iter1 != key.end();iter1++, iter2++){
                if((*iter1).a == i && (*iter1).b == j){
                    cout<<*iter2<<endl;
                    break;
                }
            }
        }
        b:
        cout<<"";
    }
    return 0;
}