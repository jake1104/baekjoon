#include<iostream>
#include<string>
using namespace std;
int main(){
    string N;cin>>N;
    int c[10]={0,},s=0;for(char i:N){c[i-'0']++;s+=i-'0';}
    if(!c[0]){cout<<-1;return 0;}
    if(s%3){cout<<-1;return 0;}
    for(int i=9;i>=0;i--){
        for(int j=0;j<c[i];j++)cout<<i;
    }
}