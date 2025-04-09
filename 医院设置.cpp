#include <iostream>
using namespace std;
int n;
struct Node{
    int people;
    int lc;
    int rc;
    int p;
    bool is_pl;
}tr[105];


int dfs(int id, int dn[], int dn_len, int s){
    if(tr[id].rc == 0 && tr[id].lc == 0 && tr[id].p == 0){
        return tr[id]
    }
    int sum1 = 0;
    bool flag = 1;
    if(tr[id].rc != 0) {
        for (int i = 1; i <= dn_len; i++) {
            if (tr[id].rc == dn[i]) {
                flag = 0;
            }
        }
        if (flag) {
            dn[dn_len + 1] = id;
            sum1 += dfs(tr[id].rc, dn, dn_len + 1, sum1);
        }
    }
    flag = 1;
    if(tr[id].lc != 0) {
        for (int i = 1; i <= dn_len; i++) {
            if (tr[id].lc == dn[i]) {
                flag = 0;
            }
        }
        if (flag) {
            dn[dn_len + 1] = id;
            sum += dfs(tr[id].lc, dn, dn_len + 1);
        }
    }
    flag = 1;
    if(tr[id].p != 0) {
        for (int i = 1; i <= dn_len; i++) {
            if (tr[id].p == dn[i]) {
                flag = 0;
            }
        }
        if (flag) {
            dn[dn_len + 1] = id;
            sum += dfs(tr[id].p, dn, dn_len + 1);
        }
    }
    return sum;
}


int main(){
    int w, u, v;
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>w>>u>>v;
        tr[i].people = w;
        tr[i].lc = u;
        tr[i].rc = v;
        tr[u].p = i;
        tr[v].p = i;
        tr[u].is_pl = 1;
        tr[u].is_pl = 0;
    }
    cout<<dfs(1, {-1});
    return 0;
}