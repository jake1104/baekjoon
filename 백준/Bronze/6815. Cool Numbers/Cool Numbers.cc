#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int c=0;
    for(int i=1;pow(i,6)<=b;i++){
        int sp=pow(i,6);
        if(sp>=a&&sp<=b)c++;
    }cout<<c;
}