#include <iostream>
#include <deque>
using namespace std;
struct Node{
    int value;
    int i;
};
deque<deque<Node>> dq;
int main(){
    int n, m;
    cin>>n>>m;
    int a_i[100005] = {};
    for(int i = 1;i<=n;i++){
        cin>>a_i[i];
    }
    int T;
    cin>>T;
    for(int i = 1;i<=T;i++){
        string choose;
        int x;
        cin>>choose;
        if(choose == "push"){
            cin>>x;
            for(auto iter = dq.begin();iter != dq.end();iter++){
                if((*iter).empty() || (*iter).front().i == i){
                    (*iter).push_back({x, a_i[i]});
                    break;
                }
            }
        }
        else{
            cout<<dq.front().front().value<<endl;
            dq.front().pop_front();
        }
    }
    return 0;
}