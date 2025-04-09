#include <iostream>
#include <deque>
using namespace std;
deque<int> q[100005];
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        int a, x;
        cin>>s;
        if(s == "push_back"){
            cin>>a>>x;
            q[a].push_back(x);
        }
        else if(s == "pop_back"){
            cin>>a;
            if(q[a].empty()){
                continue;
            }
            q[a].pop_back();
        }
        else if(s == "push_front"){
            cin>>a>>x;
            q[a].push_front(x);
        }
        else if(s == "pop_front"){
            cin>>a;
            if(q[a].empty()){
                continue;
            }
            q[a].pop_front();
        }
        else if(s == "size"){
            cin>>a;
            cout<<q[a].size()<<endl;
        }
        else if(s == "front"){
            cin>>a;
            if(q[a].empty()){
                continue;
            }
            cout<<q[a].front()<<endl;
        }
        else if(s == "back"){
            cin>>a;
            if(q[a].empty()){
                continue;
            }
            cout<<q[a].back()<<endl;
        }
    }
    return 0;
}