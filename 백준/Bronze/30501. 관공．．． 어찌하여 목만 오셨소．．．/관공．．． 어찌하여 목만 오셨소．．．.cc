#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int N;cin>>N;
    bool c=false;
    while(N--&&!c){
        c=false;
        char I[1000];cin>>I;
        for(int i=0;i<strlen(I)&&!c;i++)c=I[i]=='S';
        if(c)cout<<I;
    }
}