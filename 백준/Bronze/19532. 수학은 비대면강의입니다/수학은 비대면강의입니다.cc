#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;int x,y;bool C=1;
    for(x=-999;x<1000&&C;x++){
        for(y=-999;y<1000&&C;y++){
            if(a*x+b*y==c&&d*x+e*y==f)C=0;
        }
    }cout<<x-1<<' '<<y-1;
}