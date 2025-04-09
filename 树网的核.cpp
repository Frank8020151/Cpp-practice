#include <iostream>
#include <vector>
using namespace std;
int c = 1;
int d[305];
struct e{
    int length;
    int next;
};
vector<e> E[305];
int n, s;
int main(){
    cin>>n>>s;
    int u, v, w;
    for(int i = 2;i<=n;i++){
        cin>>u>>v>>w;
        E[u].push_back({w, v});
        E[v].push_back({u, w});
    }
    d[c] = 0;
    dfs()
    return 0;
}