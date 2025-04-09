#include <iostream>
#include <string>
using namespace std;
string s, x;
string small(string s){
    int len = s.length();
    string temp;
    for(int i = 0;i<len;i++){
        if(s[i] < 'a') temp[i] = s[i] + 32;
        else temp[i] = s[i];
    }
    return temp;
}
int main(){
    cin>>s;
    getline(cin, x);
    int len = x.length();
    string d = "";
    int cnt = 0, cnt1 = 0;
    int ci = -1;
    s = small(s);
    for(int i = 0;i<len;i++){
        if(x[i] == ' ') {
            if(small(d) == s){
                if(ci == -1) ci = cnt1;
                cnt++;
            }
            cnt1++;
            d = "";
        }
        else{
            d += x[i];
        }
    }
    cout<<s;
    cout<<cnt1<<' '<<ci;
    return 0;
}