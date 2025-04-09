#include<iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x1>x2)swap(x1,x2);if(y1>y2)swap(y1,y2);
    if(x3>x4)swap(x3,x4);if(y3>y4)swap(y3,y4);
    int x=max(x1,x3),xx=min(x2,x4),y=max(y1,y3),yy=min(y2,y4);
    int w=xx-x,h=yy-y;
    if(w>0&&h>0)cout<<"FACE";
    else if((w==0&&h>0)||(w>0&&h==0))cout<<"LINE";
    else if(w==0&&h==0)cout<<"POINT";
    else cout<<"NULL";
}