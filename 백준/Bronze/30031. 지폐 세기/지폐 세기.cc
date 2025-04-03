#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int c=0;
    while(N--){
        int W,H;cin>>W>>H;
        if(W==136)c+=1000;
        if(W==142)c+=5000;
        if(W==148)c+=10000;
        if(W==154)c+=50000;
    }cout<<c;
}