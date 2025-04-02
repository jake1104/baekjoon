#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int s=N;
    while(N--)s+=N;
    cout<<s<<endl<<s*s<<endl<<s*s;
}