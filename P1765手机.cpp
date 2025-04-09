#include <iostream>
#include <string>
using namespace std;
int main(){
    //直接把所有字母键位按一下需要按的键数赋值到列表
    int a[30] = {1,2,3,1,2,3,1,2,3,
                 1,2,3,1,2,3,1,2,3,
                 4,1,2,3,1,2,3,4};
    string s;
    //带空格输入
    getline(cin, s);
    int len = s.length();
    int cnt = 0;
    //遍历字符串
    for(int i = 0;i<len;i++){
        //如果是空格cnt++
        if(s[i] == ' '){
            cnt++;
        }
        else{
            //否则就加对应的量
            cnt += a[s[i] - 'a'];
        }
    }
    //输出结果
    cout<<cnt;
    return 0;
}