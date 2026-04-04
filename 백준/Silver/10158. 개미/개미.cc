#include<iostream>
using namespace std;
int main(){
    int w,h,p,q,t;
    cin>>w>>h>>p>>q>>t;
    int tw=t%(w<<1),th=t%(h<<1);
    p+=tw,q+=th;
    if(p>w)p=(w<<1)-p;
    if(q>h)q=(h<<1)-q;
    if(p<0)p=-p;
    if(q<0)q=-q;
    cout<<p<<' '<<q;
}