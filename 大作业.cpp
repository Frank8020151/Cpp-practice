#include <bits/stdc++.h>
using namespace std;





struct bignum{
    char s[10090];
    void read(){
        cin>>s;
    }
    void write(){
        cout<<s;
        cout<<endl;
    }
    bignum operator+(bignum &other){
        int int1[10090]={};
        int int2[10090]={};
        int len1 = strlen(s);
        int len2 = strlen(other.s);
        for(int i = 0;i<=len1-1;i++){
            int1[len1-i-1]=(int)s[i]-48;
        }
        for(int i = 0;i<=len2-1;i++){
            int2[len2-i-1]=(int)other.s[i]-48;
        }
        int lenans = max(len1,len2);
        int add = 0;
        int ans[10090]={};
        for(int i = 0;i<=lenans-1;i++){
            ans[i]=int1[i]+int2[i]+add;
            add=0;
            add=ans[i]/10;
            ans[i]%=10;
        }
        if(add!=0){
            ans[lenans++]=add;
        }
        bignum rt;
        for(int i = 0;i<=lenans-1;i++){
            rt.s[lenans-i-1] = (char)(ans[i]+'0');
        }
        return rt;
    }
    bignum operator-(bignum &other){
        int int1[10090]={};
        int int2[10090]={};
        int len1 = strlen(s);
        int len2 = strlen(other.s);
        bool flag = false;
        if(strcmp(s,other.s)==0){
            bignum rt;
            rt.s[0] = '0';
            return rt;
        }
        if(len1<len2||(len1==len2 && strcmp(s,other.s)<0)){
            swap(len1,len2);
            swap(s,other.s);
            flag = true;
            cout<<'-';
        }
        for(int i = 0;i<=len1-1;i++){
            int1[len1-i-1]=(int)s[i]-48;
        }
        for(int i = 0;i<=len2-1;i++){
            int2[len2-i-1]=(int)other.s[i]-48;
        }
        int lenans = len1;
        int ans[10090]={};
        for(int i = 0;i<=lenans-1;i++){
            if(int1[i]<int2[i]){
                int1[i+1]--;
                int1[i]+=10;
            }
            ans[i]=int1[i]-int2[i];
        }
        while(ans[lenans-1]==0){
            lenans--;
        }
        bignum rt;
        for(int i = 0;i<=lenans-1;i++){
            rt.s[lenans-i-1] = (char)(ans[i]+'0');
        }
        if(flag) swap(s, other.s);
        return rt;
    }
    bignum operator*(bignum &other){
        int a[10090]={},b[10090]={};
        int lena = strlen(s),lenb = strlen(other.s);
        for(int i = 0;i<=lena-1;i++){
            a[lena-1-i]=s[i]-'0';
        }
        for(int i = 0;i<=lenb-1;i++){
            b[lenb-1-i]=other.s[i]-'0';
        }
        int ans[21000]={},in = 0;
        for(int j = 0;j <= lenb-1;j++){
            for(int i = 0;i<=lena-1;i++){
                ans[i+j]=a[i]*b[j] + in + ans[i+j];
                in = ans[i+j]/10;
                ans[i+j]%=10;
            }
            if(in>0){
                ans[lena+j] = in;
                in = 0;
            }
        }
        int lenans = lena+lenb;
        while(ans[lenans-1]==0&&lenans>1){
            lenans--;
        }
        bignum rt;
        for(int i = 0;i<=lenans-1;i++){
            rt.s[lenans-i-1] = (char)(ans[i]+'0');
        }
        return rt;
    }
    bignum operator/(long long other){
        int a[10090]={};
        int lena = strlen(s);
        for(int i = 0;i<=lena-1;i++){
            a[i] = s[i]-48;
        }
        int lenans = lena;
        long long ans[10090]={},rem = 0;
        for(int i = 0;i<=lenans-1;i++){
            ans[i] = (rem * 10 +a[i]) / other;
            rem = (rem * 10 + a[i]) % other;
        }
        int k = 0;
        while(ans[k] == 0 && k < lenans - 1){
            k++;
        }
        bignum rt{};
        for(int i = 0;i<=lenans-1-k;i++){
            cout<<ans[i+k];
        }
        return rt;
    }
    bignum operator%(long long other){
        int a[10090]={};
        int lena = strlen(s);
        for(int i = 0;i<=lena-1;i++){
            a[i] = s[i]-48;
        }
        int lenans = lena;
        long long ans[10090]={},rem = 0;
        for(int i = 0;i<=lenans-1;i++){
            ans[i] = (rem * 10 +a[i]) / other;
            rem = (rem * 10 + a[i]) % other;
        }
        bignum rt{};
        sprintf(rt.s, "%lld", rem);
        return rt;
    }
};
int main(){
    bignum x,y;
    long long z;
    x.read();y.read();
    cin>>z;
    (x+y).write();
    (x-y).write();
    (x*y).write();
    (x/z).write();
    (x%z).write();
    return 0;
}