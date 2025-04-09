#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main(){
    int m, n, cnt = 0;
    cin>>m>>n;
    int word[100005] = {};
    deque<int> memory;
    for(int i = 1;i<=n;i++){
        cin>>word[i];
        bool flag = 1;
        for(auto iter = memory.begin();iter != memory.end();iter++){
            if(*iter == word[i]){
                flag = 0;
                break;
            }
        }
        if(flag){
            if(memory.size() == m){
                memory.pop_front();
            }
            memory.push_back(word[i]);
        }
        cnt += flag;
    }
    cout<<cnt;
    return 0;
}