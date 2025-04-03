#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int c[26];for(int i=0;i<26;i++)c[i]=0;
    for(int i=0;i<N;i++){char a;cin>>a;c[a-'A']++;}
    char h;cin>>h;
    cout<<c[h-'A'];
}