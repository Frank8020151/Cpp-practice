#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int p;
    string s;
    int x;
    cin>>p;
    cin>>s;
    int len = s.length();
    while(p--){
        cin>>x;
        if(x == 4){
            string str;
            cin>>str;
            if(s.find(str) == std::string::npos){
                cout<<-1;
            }
            else{
                cout<<s.find(str);
            }
        }
        else{
            if(x == 1){
                string str;
                cin>>str;
                s += str;
            }
            if(x == 2){
                int a, b;
                cin>>a>>b;
                s = s.substr(a, b);
            }
            if(x == 3){
                int a;
                string str;
                cin>>a>>str;
                s = s.insert(a, str);
            }
            cout<<s;
        }
        cout<<'\n';
    }
    return 0;
}