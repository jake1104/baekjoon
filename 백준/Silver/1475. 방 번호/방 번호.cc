#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;cin>>N;
    vector<int>d(10,0);
    while(N){
        d[N%10]++;
        N/=10;
    }int M=0;
    for(int i=0;i<10;i++)
        if(i-6&&i-9)M=M>d[i]?M:d[i];
    int t=((d[6]+d[9])>>1)+((d[6]+d[9])&1);
    M=M>t?M:t;cout<<M;
}