#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int L,C;
char I[15];
void f(int i,string s,int m,int j){
    if(s.length()==L){if(m>0&&j>1){cout<<s<<endl;}return;}
    if(i>=C)return;
    for(int k=i+1;k<C;k++){
        bool M=string("aeiou").find(I[k])!=string::npos;
        f(k,s+I[k],m+M,j+!M);
    }
}
int main(){
    cin>>L>>C;for(int i=0;i<C;i++)cin>>I[i];
    sort(I,I+C);f(-1,"",0,0);
}