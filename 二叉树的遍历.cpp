#include <iostream>
#include <cmath>
using namespace std;
struct Node{
    int parent;
    int left_son;
    int right_son;
    int id;
}Tree[1000005];
void last(int id){
    if(id == 0){
        return;
    }
    if(Tree[id].left_son == 0 && Tree[id].right_son == 0){
        cout<<id<<' ';
        return;
    }
    last(Tree[Tree[id].left_son].id);
    last(Tree[Tree[id].right_son].id);
    cout<<id<<' ';
}
void first(int id){
    if(id == 0){
        return;
    }
    cout<<id<<' ';
    if(Tree[id].left_son == 0 && Tree[id].right_son == 0){
        return;
    }
    first(Tree[Tree[id].left_son].id);
    first(Tree[Tree[id].right_son].id);
}
void middle(int id){
    if(id == 0){
        return;
    }
    if(Tree[id].left_son == 0 && Tree[id].right_son == 0){
        cout<<id<<' ';
        return;
    }
    middle(Tree[Tree[id].left_son].id);
    cout<<id<<' ';
    middle(Tree[Tree[id].right_son].id);
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
    first(1);
    cout<<endl;
    middle(1);
    cout<<endl;
    last(1);
    return 0;
}