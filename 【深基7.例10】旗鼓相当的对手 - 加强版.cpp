#include <iostream>
using namespace std;
int n;

struct Node{
    string s;
    int c, m, e;
}student[1005];


int sum(int i){
    return student[i].c + student[i].m + student[i].e;
}


bool qi_gu(int i, int j){
    return (abs(student[i].c - student[j].c) <= 5 && abs(student[i].m - student[j].m) <= 5 && abs(student[i].e - student[j].e) <= 5 && abs(sum(i) - sum(j)) <= 10);
}


int main(){
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>student[i].s>>student[i].c>>student[i].m>>student[i].e;
    }
    for(int i = 1;i<=n;i++){
        for(int j = i+1;j<=n;j++){
            if(qi_gu(i, j)) cout<<student[i].s<<" "<<student[j].s<<'\n';
        }
    }
    return 0;
}