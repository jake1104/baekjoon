#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    cout<<fixed;
    cout.precision(3);
    int C;cin>>C;while(C--){
        int N;cin>>N;int s[N];for(int i=0;i<N;i++)cin>>s[i];
        double a=(double)accumulate(s,s+N,0)/N;
        int I=0;for(int i:s)I+=i>a;
        cout<<(double)I*100/N<<'%'<<endl;
    }
}