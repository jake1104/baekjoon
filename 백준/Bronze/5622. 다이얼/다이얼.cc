#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string I;cin>>I;int s=0;
    for(int i=0;i<I.length();i++){
        char t=I[i];
        if('A'<=t&&t<='C')s+=3;
        else if(t<='F')s+=4;
        else if(t<='I')s+=5;
        else if(t<='L')s+=6;
        else if(t<='O')s+=7;
        else if(t<='S')s+=8;
        else if(t<='V')s+=9;
        else s+=10;
    }cout<<s;
}