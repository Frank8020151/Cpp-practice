#include <iostream>
#include <vector>
using namespace std;
struct Node{
    vector<int> children;
    int death;
}tr[100005];
bool vis[100005] = {0, 1};
void dfs(int id, int dep){
    if(tr[id].children.empty()){
        return;
    }
    for(auto iter = tr[id].children.begin();iter != tr[id].children.end();iter++){
        if(vis[*iter] == 1) continue;
        vis[*iter] = 1;
        tr[*iter].death = dep+1;
        dfs(*iter, dep+1);
    }
}

int main(){
    int u, v, n, d, cnt = 0;
    cin>>n>>d;
    for(int i = 1;i<n;i++){
        cin>>u>>v;
        tr[u].children.push_back(v);
        tr[v].children.push_back(u);
    }
    dfs(1, 0);
    for(int i = 2;i<=n;i++){
        if(tr[i].death <= d){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}