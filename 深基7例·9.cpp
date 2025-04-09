#include <iostream>
using namespace std;
int n;

struct Student{
    string name;
    int chinese, maths, english;
}student[1005];


int main(){
    Student maxn = {"", 0, 0, 0};
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>student[i].name>>student[i].chinese>>student[i].maths>>student[i].english;
        if(student[i].chinese + student[i].maths + student[i].english > maxn.chinese + maxn.maths + maxn.english
         || i == 1 && student[i].chinese + student[i].maths + student[i].english == maxn.chinese + maxn.maths + maxn.english){
            maxn = student[i];
        }
    }
    cout<<maxn.name<<" "<<maxn.chinese<<" "<<maxn.maths<<" "<<maxn.english;
    return 0;
}