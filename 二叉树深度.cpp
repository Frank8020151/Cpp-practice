#include <iostream>
#include <cmath>
using namespace std;
struct Node{
    int parent;
    int left_son;
    int right_son;
    int id;
}Tree[1000005];
int deeth(int id){
    if(Tree[id].left_son == 0 && Tree[id].right_son == 0){
        return 1;
    }
    return max(deeth(Tree[id].left_son), deeth(Tree[id].right_son))+1;
}
int main(){
    int n;
    cin>>n;
    Tree[1] = {0, 0, 0, 1};
    for(int i = 1;i<=n;i++){
        cin>>Tree[i].left_son>>Tree[i].right_son;
        Tree[Tree[i].left_son].id = Tree[i].left_son;
        Tree[Tree[i].right_son].id = Tree[i].right_son;
        Tree[Tree[i].left_son].parent = Tree[i].id;
        Tree[Tree[i].right_son].parent = Tree[i].id;
    }
    cout<<deeth(1);
    return 0;
}