#include <iostream>
#include <stack>
using namespace std;
stack<int> num;
int main(){
    string s;
    cin>>s;
    int len = s.length();
    int cnt = 0;
    for(int i = 0;i<len;i++){
        if(s[i] == '.'){
            num.push(cnt);
            cnt = 0;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            cnt *= 10;
            cnt += (s[i]-'0');
        }
        else{
            int num1, num2;
            if(s[i] == '+'){
                num1 = num.top();
                num.pop();
                num2 = num.top();
                num.pop();
                num.push(num2 + num1);
            }
            else if(s[i] == '-'){
                num1 = num.top();
                num.pop();
                num2 = num.top();
                num.pop();
                num.push(num2 - num1);
            }
            else if(s[i] == '*'){
                num1 = num.top();
                num.pop();
                num2 = num.top();
                num.pop();
                num.push(num2 * num1);
            }
            else if(s[i] == '/'){
                num1 = num.top();
                num.pop();
                num2 = num.top();
                num.pop();
                num.push(num2 / num1);
            }
        }
    }
    cout<<num.top();
    return 0;
}