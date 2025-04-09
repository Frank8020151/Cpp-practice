#include <iostream>
#include <algorithm>
using namespace std;
//n:学生个数
int n;
//a:学生数组
struct Student{
    int id, a, b, c;
}a[305];

//sort排序比较函数
bool cmp(Student x, Student y){
    if(x.a + x.b + x.c == y.a + y.b + y.c){
        if(x.a == y.a) return x.id < y.id;
        return x.a > y.a;
    }
    return x.a + x.b + x.c > y.a + y.b + y.c;
}

//主函数
int main(){
    //输入学生个数
    cin>>n;
    //输入并给id赋值
    for(int i = 1;i<=n;i++){
        a[i].id = i;
        cin>>a[i].a>>a[i].b>>a[i].c;
    }
    //sort排序
    sort(a + 1, a + n + 1, cmp);
    //输出前5个学生的信息
    for(int i = 1;i<=5;i++){
        cout<<a[i].id<<' '<<a[i].a + a[i].b + a[i].c<<endl;
    }
    //结束
    return 0;
}