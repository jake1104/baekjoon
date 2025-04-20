#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int l=0,c=0;
    while(N--){
        int t;cin>>t;
        if(l==0)l=t;
        else{
            while(l>t){c++;t*=2;}
            l=t;
        }
    }cout<<c;
}