#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int y=2024,m=1;
    while(N--){
        m+=7;
        if(m>12){m-=12;y++;}
    }
    cout<<y<<' '<<m;
}