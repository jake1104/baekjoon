#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    int N;cin>>N;
    int a[10],l=0;
    while(N){
        a[l++]=N%10;
        N/=10;
    }
    sort(a,a+l);
    for(int i=l-1;i>=0;i--)cout<<a[i];
}