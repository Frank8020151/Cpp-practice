#include <iostream>
#include <vector>
using namespace std;
int cnt[1005];
struct Node{
    vector<int> ch;
}tr[1005];
int dfs(int id){
    if(tr[id].ch.empty()){
        cnt[id] = 1;
        return 1;
    }
    int sum = 0;
    for(auto iter = tr[id].ch.begin();iter != tr[id].ch.end();iter++){
        sum += dfs(*iter);
    }
    cnt[id] = sum + 1;
    return sum + 1;
}
int main(){
    int n;
    cin>>n;
    int x;
    for(int i = 2;i<=n;i++){
        cin>>x;
        tr[x].ch.push_back(i);
    }
    dfs(1);
    for(int i = 1;i<=n;i++){
        cout<<cnt[i]<<endl;
    }
    return 0;
}