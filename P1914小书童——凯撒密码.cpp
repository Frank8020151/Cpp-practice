#include <iostream>
#include <cstring>
using namespace std;
int n;
char s[55];
int main(){
    cin>>n>>s;
    n %= 26;
    size_t len = strlen(s);
    for(long unsigned int i = 0;i<len;i++){
        if(s[i] + n > 'z'){
            s[i] = s[i] - 26 + n;
        }
        else{
            s[i] = s[i] + n;
        }
    }
    cout<<s;
    return 0;
}