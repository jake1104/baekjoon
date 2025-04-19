#include<iostream>
int f(int a,int b){
    if(b==0)return a;
    int s=a^b;
    int c=(a&b)<<1;
    return f(s,c);
}
int main(){
    int a,b;std::cin>>a>>b;
    std::cout<<f(a,b);
}