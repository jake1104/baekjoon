#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int N;cin>>N;
    double x[N],y[N];for(int i=0;i<N;i++)cin>>x[i]>>y[i];
    double s=0;for(int i=0;i<N;i++){
        s+=x[(i+1)%N]*y[i];
        s-=x[i]*y[(i+1)%N];
    }cout<<fixed;cout.precision(1);cout<<abs(s)/2;
}