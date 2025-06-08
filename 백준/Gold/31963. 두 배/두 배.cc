#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int l=0,c=0,lc=0,lo;
    while(N--){
        int t;cin>>t;
        if(l==0){l=t;lo=t;}
        else{
            if(lo>=t){
                lo=t;
                t<<=lc;
                while(l>t){t<<=1;lc++;}
                c+=lc;
            }else{
                lc=0;
                lo=t;
                while(l>t){t<<=1;lc++;}
                c+=lc;
            }
            l=t;
        }
    }cout<<c;
}