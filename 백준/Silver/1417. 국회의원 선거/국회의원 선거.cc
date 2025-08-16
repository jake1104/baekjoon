#include<iostream>
#include<algorithm>
using namespace std;
struct h{int n,p;};
bool c(h a,h b){return a.p>b.p;}
int main(){
    int N;cin>>N;
    int M=0;
    h I[N];for(int i=0u;i<N;i++){
        I[i].n=i;
        cin>>I[i].p;
    }if(N==1){cout<<0;return 0;}
    sort(I+1,I+N,c);int C=0;
    while(I[1].p>=I[0].p){
        I[0].p++;I[1].p--;C++;
        sort(I+1,I+N,c);
    }cout<<C;
}