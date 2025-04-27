#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;cin>>N;
    int a[N+1];for(int i=1;i<=N;i++)cin>>a[i];
    bool v[N+1];for(int i=1;i<=N;i++)v[i]=0;
    int m=0,r[N];
    for(int i=1;i<=N;i++){
        if(!v[i]){
            int t=a[i],c=1;v[i]=1;
            while(t!=i){
                t=a[t];c++;
                if(c>N){c=0;t=i;}
            }
            if(c){
                int t=a[i];r[m++]=i;
                while(t!=i){v[t]=1;r[m++]=t;t=a[t];}
            }
        }
    }cout<<m<<endl;sort(r,r+m);for(int i=0;i<m;i++)cout<<r[i]<<endl;
}