#include<iostream>
#include<queue>
#include<utility>
#include<string.h>
using namespace std;
bool P[10000],V[10000];
short dx[8]={-1000,-100,-10,-1,1,10,100,1000};
struct p{short a,b,c,d;};
p f(short n){
    short n1=n/1000;
    short n2=n/100-n1*10;
    short n3=n/10-n1*100-n2*10;
    short n4=n-n1*1000-n2*100-n3*10;
    return{n1,n2,n3,n4};
}int main(){
    memset(P,0,sizeof(P));
    for(short i=2;i<10000;i++){
        if(!P[i]){
            for(short j=2*i;j<10000;j+=i)P[j]=1;
        }
    }
    short T;cin>>T;while(T--){
        memset(V,0,sizeof(V));
        short x,y,c=-1;cin>>x>>y;V[x]=1;
        queue<pair<int,int>>q;q.push({x,0});
        while(!q.empty()&&c==-1){
            pair<int,int>t=q.front();q.pop();
            if(t.first==y)c=t.second;
            for(short i=0;i<8;i++){
                for(short j=1;j<=9;j++){
                    short rx=t.first+dx[i]*j;
                    p tp=f(t.first),rxp=f(rx);
                    short d=(tp.a!=rxp.a)+(tp.b!=rxp.b)+(tp.c!=rxp.c)+(tp.d!=rxp.d);
                    if(d==1&&999<rx&&rx<=9999){
                        if(!V[rx]&&!P[rx]){
                            V[rx]=1;
                            q.push({rx,static_cast<short>(t.second+1)});
                        }
                    }
                }
            }
        }cout<<(c==-1?"Impossible":to_string(c))<<endl;
    }
}