#include <iostream>
#include <stack>
using namespace std;
struct kuo_hao{
    int pos;
    int is_left;
};
stack<kuo_hao>small;
stack<kuo_hao>middle;
int main(){
    string s;
    cin>>s;
    int len = s.length();
    for(int i = 0;i<len;i++){
        if(s[i] == '('){
            small.push({i, 1});
        }
        else if(s[i] == ')'){
            if(small.top().is_left == 1){
                small.pop();

            }
            small.push({i, 0});
        }
    }
    return 0;
}