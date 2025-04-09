//头文件
#include <iostream>
#include <stack>
//命名空间
using namespace std;
//定义变量
int n;
//定义一个栈
stack<int>a;

//主函数
int main(){
    //输入
    cin>>n;
    while(n!=1){
        //入栈n
        a.push(n);
        //如果n
        if(n%2) n = n * 3 + 1;
        else n /= 2;
    }
    a.push(1);
    while(!a.empty()){
        cout<<a.top()<<' ';
        a.pop();
    }
    return 0;
}