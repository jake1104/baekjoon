#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;cin>>N;
    int a[N];for(int i=0;i<N;i++)cin>>a[i];
    sort(a,a+N);
    int ms=N*a[N-1],r;
    for(int i=a[0];i<=a[N-1];i++){
        int s=0;
        for(int j=0;j<N;j++)s+=a[j]-i>=0?a[j]-i:-a[j]+i;
        if(s<ms){r=i;ms=s;}
    }cout<<r;
}