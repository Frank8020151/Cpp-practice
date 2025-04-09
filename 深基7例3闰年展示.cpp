//导入头文件
#include <iostream>
#include <queue>
//使用命名空间
using namespace std;
//定义一个为0的变量
int temp = 0;
//定义a, b, cnt三个指针变量
int *a = nullptr, *b = nullptr, *cnt = &temp;//a：初始化为空指针， b：初始化为空指针， cnt：让cnt指向值为0的temp变量

//定义r队列
queue<int>r;

//定义一个布尔返回值的rvn函数，用于判断一个指针x指向的值是否为润年
bool rvn(const int *x){
    //如果是就返回true， 否则返回false
    return ((*x % 4 == 0 && *x % 100 != 0) || *x % 400 == 0);
}

//定义一个无返回值的push函数，形参列表包含一个指向一个队列的指针q和一个二重指针x，用于将指针x指向的指针的值加入指针q指向的队列
void push(queue<int> *q, int **x){
    (*q).push(**x);
}

//主函数
int main(){
    //给a和b分配内存
    a = new int;
    b = new int;
    //读入a和b
    cin>>*a>>*b;
    //定义一个二重指针i并初始化为a的值
    int **i = &a;
    //跳转到check
    goto check;

    check:
    //如果i指向指针指向的值是闰年那么cnt指向的值+1，并将i指向的值加入队列r
    if(rvn(*i)){
        (*cnt)++;
        push(&r, i);
    }
    //i指向的指针指向的值+1
    (**i)++;
    //如果b指向的值比i指向的指针指向的值大于0，那么继续跳转到check
    if(*b - **i >= 0){
        goto check;
    }

    //输出cnt指向的值
    cout<<*cnt<<'\n';
    //输出队列r最前方的值并弹出，重复执行直到r不为空不成立
    while(!r.empty()) {
        cout << r.front() << ' ';
        r.pop();
    }
    //释放内存
    delete a;
    delete b;
    //return 0;结束主函数
    return 0;
}