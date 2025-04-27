#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;long s=1;
    while(N--)s*=N+1;
    cout<<s;
}