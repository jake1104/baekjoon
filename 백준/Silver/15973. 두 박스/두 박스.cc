#include<iostream>
using namespace std;
int main() {
    int x11,y11,x12,y12;
    int x21,y21,x22,y22;
    cin>>x11>>y11>>x12>>y12>>x21>>y21>>x22>>y22;
    if((x22==x11&&y22==y12+y22-y21)||(x22==x11&&y22==y11)||(x22==x12+x22-x21&&y22==y11)||(x22==x12+x22-x21&&y22==y12+y22-y21))cout<<"POINT"; 
    else if((x11<x22&&x22<x12+x22-x21&&(y22==y12+y22-y21||y22==y11))||(y11<y22&&y22<y12+y22-y21&&(x22==x11||x22==x12+x22-x21)))cout<<"LINE";
    else if(x22<x12+x22-x21&&y22<y12+y22-y21&&x11-(x22-x21)<x21&&y11-(y22-y21)<y21)cout<<"FACE";
    else cout<<"NULL";
}