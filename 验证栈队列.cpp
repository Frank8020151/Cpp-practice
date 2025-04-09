#include <iostream>
#include <stack>

using namespace std;


int main(){
    int q;
    cin>>q;
    while(q--){
        stack<int> st;
        int n;
        int pushed[100005] = {}, poped[100005] = {};
        cin>>n;
        for(int i = 1;i<=n;i++){
            cin>>pushed[i];
        }
        for(int i = 1;i<=n;i++){
            cin>>poped[i];
        }
        int k = 1;
        for(int i = 1;i<=n;i++){
            st.push(pushed[i]);
            while(!st.empty() && k<=n && st.top() == poped[k]){
                st.pop();
                k++;
            }
        }
        if(st.empty()){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}