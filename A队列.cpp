#include <iostream>
#include <queue>
using namespace std;
//注释为stl
class Q{
public:
    int a[10005] = {};
    int l=0, r=0;
    void push(int x){
        a[++r] = x;
    }
    void pop(){
        if(r - l != 0) {
            l++;
        }
        else{
            cout<<"ERR_CANNOT_POP"<<endl;
        }
    }
    void front(){
        if(r - l != 0) {
            cout << a[l + 1]<<endl;
        }
        else{
            cout<<"ERR_CANNOT_QUERY"<<endl;
        }
    }
    int size(){
        return r - l;
    }
};
queue<int> a;
Q b;
int main(){
    int n;
    cin>>n;
    int c;
    while(n--){
        //cout<<"size:"<<b.size<<endl;
        cin>>c;
        if(c == 1){
            int x;
            cin>>x;
            b.push(x);
            /*
            a.push(x);
             */
        }
        else if(c == 2){
            b.pop();
            /*
            if(!a.empty()) {
                a.pop();
            }
            else{
                cout<<"ERR_CANNOT_POP"<<endl;
            }
             */
        }
        else if(c == 3){
            b.front();
            /*
            if(!a.empty()) {
                cout << a.front() << endl;
            }
            else{
                cout<<"ERR_CANNOT_QUERY"<<endl;
            }
             */
        }
        else if(c == 4){
            cout<<b.size()<<endl;
            /*
            cout<<a.size()<<endl;
            */
        }
    }
    return 0;
}