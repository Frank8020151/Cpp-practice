#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cctype>
#include <algorithm>

using namespace std;
int first(char c){
    if(c == '+' || c == '-'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '^'){
        return 1;
    }
    return 0;
}
string f(string s){
    int len = s.length(), l=0, r=0;
    if(len == 1){
        return s;
    }
    for(int i = 0;(s[i] == '(' && s[len-i-1] == ')');i++){
        l++;
        r++;
    }
    int max_pos = l, max_first = 0;
    for(int i = l;i<len-r;i++){
        if(s[i] == '(') {
            int cnt = 1;
            while (cnt != 0){
                i++;
                if(s[i] == '(') cnt++;
                if(s[i] == ')') cnt--;
            }
        }
        if(s[i] != '^' && first(s[i]) >= max_first || s[i] == '^' && 1 > max_first){
            max_pos = i;
            max_first = first(s[i]);
        }
    }
    string first_s, second_s;
    for(int i = l;i<max_pos;i++){
        first_s += s[i];
    }
    for(int i = max_pos + 1;i<len-r;i++){
        second_s += s[i];
    }
    return f(first_s) + ' ' + f(second_s) + ' ' + s[max_pos];
}
bool jieshu(string s){
    int len = s.length();
    for(int i = 0;i<len;i++){
        if(!(s[i] >= '0' && s[i] <= '9')){
            return 0;
        }
    }
    return 1;
}
string s;
int main(){
    cin>>s;
    string ans = f(s);
    while(!jieshu(ans)) {
        int len = ans.length();
        string new_ans;
        int flag = 1;
        cout << ans<<endl;
        for (int i = 0; i < len; i += 2) {
            if (!(ans[i] >= '0' && ans[i] <= '9') && flag) {
                int ans1;
                if (ans[i] == '+') {
                    ans1 = (ans[i - 4] - '0') + (ans[i - 2] - '0');
                }
                if (ans[i] == '-') {
                    ans1 = (ans[i - 4] - '0') - (ans[i - 2] - '0');
                }
                if (ans[i] == '*') {
                    ans1 = (ans[i - 4] - '0') * (ans[i - 2] - '0');
                }
                if (ans[i] == '/') {
                    ans1 = (ans[i - 4] - '0') / (ans[i - 2] - '0');
                }
                if (ans[i] == '^') {
                    ans1 = pow(int(ans[i - 4] - '0'), int(ans[i - 2] - '0'));
                }
                new_ans += to_string(ans1);
                new_ans += ' ';
                flag = 0;
            } else {
                if (i + 4 > len || ((ans[i + 4] >= '0' && ans[i + 4] <= '9') || flag == 0)) {
                    new_ans += ans[i];
                    new_ans += ' ';
                }
            }
        }
        ans = new_ans;
    }
    return 0;
}